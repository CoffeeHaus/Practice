#include <stdio.h>
#include <stdlib.h>
/*
Andrew Neumann

strlen strcopy strcmp strrev
*/
size_t myunsafe_strlen(const char* str);
size_t mysafe_strlen(const char* str);
extern size_t asm32_mysafe_strlen(const char* str);

char* myunsafe_strcpy(char* dest, const char* src);
char* mysafe_strcpy(char* dest, const char* src); 
extern size_t asm32_mysafe_strcpy(const char* str);

size_t myunsafe_strlen(const char* str) {
    const char* s;
    s = str;
    while (*s)
    {
        s++;
    }
    return (s - str); //takes the memory location difference
}

size_t mysafe_strlen(const char* str) {
    if (str == NULL)return 0;
    const char* s;
    s = str;
    size_t c = 0;
    size_t max = (size_t)-1;
    while (*s)
    {
        s++;
        c++;
        if (max == c) return c;// this will 
    }
    return c;
}

char* myunsafe_strcpy(char* dest, const char* src)
{
    return NULL;
}

char* mysafe_strcpy(char* dest, const char* src)
{
    return NULL;
}


int main() 
{
    char teststring[] = "one test";
    char teststring2[] = "nothing";

    printf("String: %s\n", teststring);
    printf("strlen\n myunsafe: %d mysafe: %d asm32: %d\n", myunsafe_strlen(teststring), mysafe_strlen(teststring), _asm32_mysafe_strlen(teststring));
    
    printf("String: %s -> %s\n", teststring, teststring2);
    return 0;
}
