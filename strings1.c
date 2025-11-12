#include <stdio.h>
#include <string.h>

int main(void) {
    char s[256];

    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) 
{ 
    puts("Input error."); 
	return 1; }

    size_t len = strlen(s);
    if (len && s[len-1] == '\n') s[--len] = '\0';

    size_t i = 0, j = len ? len - 1 : 0;
    int pal = 1;
    while (i < j) 
{
        if (s[i] != s[j]) 
{ 
    pal = 0; break; }
        i++; j--;
    }

    if (pal) printf("\"%s\" is a palindrome.\n", s);
    else     printf("\"%s\" is not a palindrome.\n", s);
    return 0;
}
