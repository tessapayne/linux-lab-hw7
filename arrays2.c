#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
 { 
    puts("Invalid n."); 
	return 1; }

    int *src = malloc(sizeof(int) * n);
    int *dst = malloc(sizeof(int) * n);
    if (!src || !dst) 
{ 
    puts("Allocation failed."); 
	free(src); 
	free(dst); 
		return 1; }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) 
{
        if (scanf("%d", &src[i]) != 1) 
{ 
	puts("Invalid input."); 
	free(src); 
	free(dst); 
		return 1; }
    }

    for (int i = 0; i < n; i++) dst[i] = src[i];

    printf("Source: ");
    for (int i = 0; i < n; i++) printf("%d ", src[i]);
    printf("\nCopy:   ");
    for (int i = 0; i < n; i++) printf("%d ", dst[i]);
    printf("\n");

    free(src); 
    free(dst);
    return 0;
}
