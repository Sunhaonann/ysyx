#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  const char *str = s;
	    while (*str) {
				  str++;
      }
		  return str - s;
}

char *strcpy(char *dst, const char *src) {
    char *original_dst = dst;
	    while ((*dst++ = *src++)){}
			 return original_dst;

}

//src'n character cp to dst。if strlen(src)< n，dst filling '\0'
char *strncpy(char *dst, const char *src, size_t n) {
      char *original_dst = dst;
		  size_t i;
		  for (i = 0; i < n && src[i] != '\0'; i++) {
			    dst[i] = src[i];
			    }
		  for ( ; i < n; i++) {
			    dst[i] = '\0';
			    }
	   return original_dst;
}


//src connect end of dst ，and return dst
char *strcat(char *dst, const char *src) {
    char *original_dst = dst;
    // 移动 dst 指针到目标字符串的末尾
		     while (*dst) {
		        dst++;
         }
         while ((*dst++ = *src++)){}
		     return original_dst;
}

//Are they equal
int strcmp(const char *s1, const char *s2) {
         // 遍历字符串，逐个字符进行比较
      while (*s1 && (*s1 == *s2)) {
					       s1++;
		             s2++;
            }
				 // 返回两个字符的差值
      return *(unsigned char *)s1 - *(unsigned char *)s2;
}

//are they equal before n
int strncmp(const char *s1, const char *s2, size_t n) {
  if(n==0){return 0;} 
	while (n-- > 0 && *s1 && (*s1 == *s2)) {//每次循环后，n-1
	        s1++;
				  s2++;
		    }
//  如果 n 小于 0，说明已经比较完 n 个字符，返回 0
      if (n == (size_t)-1) { //2^32-1
         return 0;
         }
      return *(unsigned char *)s1 - *(unsigned char *)s2;
}

//用于将指定的值 c 设置到从内存位置 s 开始的前 n 个字节
void *memset(void *s, int c, size_t n) {
  unsigned char *p = s;  
    while (n-- > 0) {
   *p++ = (unsigned char)c;  
	 }
	 return s;
}
//将 src 指向的内存块中的 n 个字节复制到 dst 指向的内存块
void *memmove(void *dst, const void *src, size_t n) {
 		unsigned char *d = dst;
    const unsigned char *s = src;
    // 如果 dst 和 src 相同，或者 n 为 0，直接返回 dst
    if (d == s || n == 0) {
        return dst;
    }
    // 如果 dst 在 src 的前面，需要从后往前复制
    if (d > s && d < s + n) {
        d += n;
        s += n;
        while (n--) {
            *(--d) = *(--s);
        }
    } else {
        // 否则，从前往后复制
        while (n--) {
            *d++ = *s++;
        }
    }
    return dst;
}
//将 in 指向的内存块中的 n 个字节复制到 out 指向的内存块
void *memcpy(void *out, const void *in, size_t n) {
		unsigned char *d = out;
    const unsigned char *s = in;

    // 从前往后逐字节复制
    while (n--) {
        *d++ = *s++;
    }
    return out;
}

//比较两个内存块 s1 和 s2 的前 n 个字节
int memcmp(const void *s1, const void *s2, size_t n) {
		const unsigned char *p1 = s1;
    const unsigned char *p2 = s2;

    while (n--) {
        if (*p1 != *p2) {
            return *p1 - *p2;
        }
        p1++;
        p2++;
    }
    return 0;
}

#endif
