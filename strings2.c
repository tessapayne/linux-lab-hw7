#include <stdio.h>

size_t mystrlen(const char *p) 
{
    size_t n = 0;
    while (p && p[n] != '\0') n++;
    return n;
}

int main(void) 
{
    char s[256];

    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) 
{ 
    puts("Input error."); 
	return 1; }

    size_t i = 0;
    while (s[i] != '\0') 
{
        if (s[i] == '\n') 
{ 
    s[i] = '\0'; break; }
        i++;
    }

    printf("mystrlen(\"%s\") = %zu\n", s, mystrlen(s));
    return 0;
}
