#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) 
{ 
    puts("Invalid n."); 
	return 1; }

    int *a = malloc(sizeof(int) * n);
    if (!a) 
{ 
    puts("Allocation failed."); 
	return 1; }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) 
{
        if (scanf("%d", &a[i]) != 1) 
{ 
    puts("Invalid input."); 
	free(a); 
	return 1; }
    }

    int pos;
    printf("Enter deletion position [0..%d]: ", n - 1);
    if (scanf("%d", &pos) != 1 || pos < 0 || pos >= n) 
{ 
    puts("Invalid position."); 
	free(a); 
	return 1; }

    for (int i = pos; i + 1 < n; i++) a[i] = a[i + 1];

    printf("Result: ");
    for (int i = 0; i < n - 1; i++) printf("%d ", a[i]);
    printf("\n");

    free(a);
    return 0;
}
