#include <stdio.h>

void str_cat(char *s, char *t);

int main(void)
{
    char s[] = "hello";
    char t[] = " world";
    str_cat(s, t);
    printf("%s\n", s);
    return 0;
}

void str_cat(char *s, char *t)
{
    while (*s)
        ++s;
    while ((*s++ = *t++))
        ;
}