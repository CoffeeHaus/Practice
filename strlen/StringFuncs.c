#include <stdio.h>

size_t mystrlen(const char *str);

size_t my_strlen(const char *str) {
    const char *s;
  s = str;  
  while(*s)
      {
        s++;
        if((size_t)-1 == s) return (s - str);
      }
    return (s - str);
}
