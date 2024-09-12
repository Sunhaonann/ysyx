#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
void itoa(int n, char *str) {
    int i = 0, sign = n;
    if (sign < 0) n = -n;
    do {
        str[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0) str[i++] = '-';
    str[i] = '\0';

    // 反转字符串
    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int printf(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);

    int count = 0; // To keep track of the number of characters printed
    const char *p;

    for (p = fmt; *p != '\0'; p++) {
        if (*p != '%') {
            putch(*p);
            count++;
            continue;
        }

        p++; // Move past the '%'

        switch (* p) {
            case 'd': {
                int i = va_arg(args, int);
                char buffer[50];
                snprintf(buffer, sizeof(buffer), "%d", i);
                for (char *buf_p = buffer; *buf_p != '\0'; buf_p++) {
                    putch(*buf_p);
                    count++;
                }  
                break;
            }
            case 's': { 
                char *s = va_arg(args, char *);
                for (; * s != '\0'; s++) {
                    putch(*s);
                    count++;
                }
                break;
            } 
            case '%': { 
                putch('%');
                count++;
                break;
            }
            default:  {
                putch('%');
                putch(*p);
                count += 2;
                break;
            }
        }
    }
	
	  va_end(args);
    return count;
}
int vsprintf(char *out, const char *fmt, va_list ap) {
    const char *p;
    char *buf = out;
    int count = 0;
    for (p = fmt; *p != '\0'; p++) {
        if (*p != '%') {
            *buf++ = *p; // 将普通字符复制到输出缓冲区
            count++;
            continue;
        }

        p++; // 跳过 '%'
        switch (*p) {
            case 'd': {
                int i = va_arg(ap, int);
                char num_str[20]; // 假设整数不会超过 20 个字符
                itoa(i, num_str); // 将整数转换为字符串
                strcpy(buf, num_str); // 将字符串复制到输出缓冲区
                buf += strlen(num_str);
                count += strlen(num_str);
                break;
            }
            case 's': {
                char *s = va_arg(ap, char *);
                strcpy(buf, s); // 将字符串复制到输出缓冲区
                buf += strlen(s);
                count += strlen(s);
                break;
            }
            default: {
                *buf++ = '%';
                *buf++ = *p;
                count += 2;
                break;
            }
        }
    }
    *buf = '\0'; // 确保输出缓冲区以空字符结尾
    return count;
}

int sprintf(char *out, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int count = vsprintf(out, fmt, ap);
    va_end(ap);
    return count;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int count = vsnprintf(out, n, fmt, ap);
    va_end(ap);
    return count;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
    const char *p;
    char *buf = out;
    size_t count = 0;

    for (p = fmt; *p != '\0'; p++) {
        if (*p != '%') {
            if (count < n - 1) {
                *buf++ = *p; // 将普通字符复制到输出缓冲区
            }
            count++;
            continue;
        }

        p++; // 跳过 '%'
        switch (*p) {
            case 'd': {
                int i = va_arg(ap, int);
                char num_str[20]; // 假设整数不会超过 20 个字符
                itoa(i, num_str); // 将整数转换为字符串
                size_t len = strlen(num_str);
                if (count + len < n) {
                    strcpy(buf, num_str); // 将字符串复制到输出缓冲区
                    buf += len;
                } else if (count < n - 1) {
                    strncpy(buf, num_str, n - count - 1); // 复制部分字符串
                    buf += n - count - 1;
                }
                count += len;
                break;
            }
            case 's': {
                char *s = va_arg(ap, char *);
                size_t len = strlen(s);
                if (count + len < n) {
                    strcpy(buf, s); // 将字符串复制到输出缓冲区
                    buf += len;
                } else if (count < n - 1) {
                    strncpy(buf, s, n - count - 1); // 复制部分字符串
                    buf += n - count - 1;
                }
                count += len;
                break;
            }
            default: {
                if (count < n - 1) {
                    *buf++ = '%';
                    *buf++ = *p;
                }
                count += 2;
                break;
            }
        }
    }

    if (n > 0) {
        *buf = '\0'; // 确保输出缓冲区以空字符结尾
    }

    return count;
}

#endif
