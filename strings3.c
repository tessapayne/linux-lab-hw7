#include <stdio.h>

int main(void) 
{
    int freq[256] = {0};
    char s[1024];

    printf("Enter a string: ");
    if (!fgets(s, sizeof s, stdin)) 
{ 
    puts("Input error."); 
	return 1; }

    for (int i = 0; s[i] != '\0'; i++) 
{
        unsigned char c = (unsigned char)s[i];
        freq[c]++;
    }

    printf("Character counts (non-zero):\n");
    for (int c = 0; c < 256; c++) 
{
        if (freq[c] > 0) 
{
            if (c == '\n')      printf("\\n : %d\n", freq[c]);
            else if (c == '\t') printf("\\t : %d\n", freq[c]);
            else if (c == ' ')  printf("' ' : %d\n", freq[c]);
            else                printf("%c : %d\n", c, freq[c]);
        }
    }
    return 0;
}
