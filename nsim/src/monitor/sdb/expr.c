#include <isa.h>
/*******************************************************************
 * We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 ******************************************************************/
#include <regex.h>

enum {
	NOTYPE = 256,NUM,EQUAL,HEXNUM,REGNAME,NOTEQUAL,DEREF,NEG,AND,OR

	/* TODO: Add more token types */

};

static struct rule {
	const char *regex;
	int token_type;
} rules[] = {

	/* TODO: Add more rules.
	 * Pay attention to the precedence level of different rules.
	 */

	{" +",	NOTYPE},		// spaces
	{"0x[0-9,a-f]+",HEXNUM},	// one hexadecimal number
	{"[0-9]+",NUM},			// one decimal number
	{"\\$[a-z]{2,3}",REGNAME},	// a register name
	{"\\(",'('},			// left parenthesis
	{"\\)",')'},			// right parenthesis
	{"\\*",'*'},			// multiply
	{"\\/",'/'},			// divide
	{"\\+", '+'},			// plus
	{"\\-",'-'},			// minus
	{"==", EQUAL},			// equal
	{"!=",NOTEQUAL},		//not equal
	{"&&",AND},			//logical and
	{"\\|\\|",OR},			//logical or
	{"!",'!'}			//logical not
};


#define NR_REGEX ARRLEN(rules)
static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
	int i;
	char error_msg[128];
	int ret;

	for(i = 0; i < NR_REGEX; i ++) {
		ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
		if(ret != 0) {
			regerror(ret, &re[i], error_msg, 128);
			panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
		}
	}
}

typedef struct token{
	int type;
	char str[32];
} Token;

Token tokens[64]={};//token size
int nr_token=0;

static bool make_token(char *e) {
	int position = 0;
	int i;
	regmatch_t pmatch;
	
	nr_token = 0;

	while(e[position] != '\0') {
		/* Try all rules one by one. */
		for(i = 0; i < NR_REGEX; i ++) {
			if(regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
				char *substr_start = e + position;
				int substr_len = pmatch.rm_eo;

				Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s", i, rules[i].regex, position, substr_len, substr_len, substr_start);
				position += substr_len;

				/* TODO: Now a new token is recognized with rules[i]. Add codes
				 * to record the token in the array ``tokens''. For certain 
				 * types of tokens, some extra actions should be performed.
				 */
 
switch(rules[i].token_type) {//one by one match
		case NOTYPE:
					break;

		case NUM:
			   if(substr_len>31)
			          	 {   assert(0);  }
					tokens[nr_token].type = NUM;     
					strncpy(tokens[nr_token].str, substr_start, substr_len);//match token
					tokens[nr_token].str[substr_len]='\0';
					++nr_token;
					break;

		case HEXNUM:
		  	 if(substr_len>31)
					     	assert(0);
					tokens[nr_token].type = HEXNUM;
					strncpy(tokens[nr_token].str, substr_start+2, substr_len-2);
					tokens[nr_token].str[substr_len-2]='\0';
					++nr_token;
					break;

		case REGNAME:
					tokens[nr_token].type = REGNAME;
					strncpy(tokens[nr_token].str, substr_start+ 1,substr_len-1);
					tokens[nr_token].str[substr_len-1]='\0';
					++nr_token;
					break;

		case '(':
					tokens[nr_token].type = '(';
					++nr_token;
					break;

		case ')':
					tokens[nr_token].type = ')';
					++nr_token;
					break;

		case '+':
					tokens[nr_token].type = '+';
					++nr_token;
					break;

		case '-':
					tokens[nr_token].type = '-';
					++nr_token;
					break;

		case '*':
					tokens[nr_token].type = '*';
					++nr_token;
					break;

		case '/':
					tokens[nr_token].type = '/';
					++nr_token;
					break;

		case EQUAL:
					tokens[nr_token].type = EQUAL;
					++nr_token;
					break;

		case NOTEQUAL:
					tokens[nr_token].type=NOTEQUAL;
					++nr_token;
					break;

		case AND:	
					tokens[nr_token].type=AND;
					++nr_token;
					break;

		case OR:
					tokens[nr_token].type=OR;
					++nr_token;
					break;

		case '!':
					tokens[nr_token].type='!';
					++nr_token;
					break;

		default:
					assert(0);
				}

				break;
			}
		}

		if(i == NR_REGEX) {
			printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
			return false;
		}
	}

	return true; 
}

uint32_t check_parentheses(int p, int q){// 用于检查表达式是否被一对匹配的括号包围
    if (tokens[p].type == '(' && tokens[q].type == ')') {
        int count = 0;
        for (int i = p; i <= q; i++) {
            if (tokens[i].type == '(') count++;
            if (tokens[i].type == ')') count--;
            if (count == 0 && i < q) return 0;
        }
        return count == 0;
    }
    return 0;
}

uint32_t get_operator_priority(int type) {//返回运算符的优先级
    switch (type) {
        case OR: return 1;
        case AND: return 2;
        case EQUAL: case NOTEQUAL: return 3;
        case '+': case '-': return 4;
        case '*': case '/': return 5;
        case '!': return 6;
        default: return 7;
    }
}

uint32_t find_main_operator(int p, int q) {//找到表达式中的主运算符（即优先级最低的运算符）
    int min_priority = 8;
    int main_op = -1;
    int count = 0;
    for (int i = p; i <= q; i++) {
        if (tokens[i].type == '(') count++;
        if (tokens[i].type == ')') count--;
        if (count == 0) {
            int priority = get_operator_priority(tokens[i].type);
            if (priority <= min_priority) {
                min_priority = priority;
                main_op = i;
            }
        }
    }
    return main_op;
}

uint32_t  eval(int p, int q,bool *success) {
    if (p > q) {
        assert(0);
    } else if (p == q) {
        int val;
        if (tokens[p].type == NUM) {
            sscanf(tokens[p].str, "%d", &val);
        } else if (tokens[p].type == HEXNUM) {
            sscanf(tokens[p].str, "%x", &val);
        } else {
            assert(0);
        }
        return val;
    } else if (check_parentheses(p, q)) {
        return eval(p + 1, q - 1, success);
    } else {
        int op = find_main_operator(p, q);
        int val1 = eval(p, op - 1, success);
        int val2 = eval(op + 1, q, success);
        
				if (!*success) return 0;

        switch (tokens[op].type) {
            case '+': return val1 + val2;
            case '-': return val1 - val2;
            case '*': return val1 * val2;
            case '/':	if (val2 == 0){
                     *success = false;
										 return 0;
							  	}	
									  	return val1 / val2;
            case EQUAL: return val1 == val2;
            case NOTEQUAL: return val1 != val2;
            case AND: return val1 && val2;
            case OR: return val1 || val2;
            case '!': return !val2;
            default: assert(0);
        }
    }
    return 0;
}


word_t  expr(char *e, bool *success) {
	if(!make_token(e)) {
		*success = false;
		return 0;
	}
	/* TODO: Insert codes to evaluate the expression. */
  nr_token--;
	*success = true;

	for (int i = 0; i < nr_token; i ++) {
  if (tokens[i].type == '*' && (i == 0 || (tokens[i - 1].type !=HEXNUM && tokens[i -1].type !=NUM && tokens[i -1].type !=')' && tokens[i-1].type != REGNAME)) ) {
    tokens[i].type = DEREF;
  }
  if (tokens[i].type == '-' && (i == 0 || (tokens[i - 1].type !=HEXNUM && tokens[i -1].type !=NUM && tokens[i -1].type !=')' && tokens[i-1].type != REGNAME)) ) {
   tokens[i].type = NEG; 
	} 
	}
  return eval(0,nr_token,success);
  
}

