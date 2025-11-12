#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 0) 
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

    int pos, val;
    printf("Enter insertion position [0..%d]: ", n);
    if (scanf("%d", &pos) != 1 || pos < 0 || pos > n) 
{ 
    puts("Invalid position."); 
	free(a); 
	return 1; }
    printf("Enter value to insert: ");
    if (scanf("%d", &val) != 1) 
{ 
    puts("Invalid value."); 
	free(a); 
	return 1; }

    int *b = malloc(sizeof(int) * (n + 1));
    if (!b) { puts("Allocation failed."); 
	free(a); 
	return 1; }

    for (int i = 0; i < pos; i++) b[i] = a[i];
    b[pos] = val;
    for (int i = pos; i < n; i++) b[i + 1] = a[i];

    printf("Result: ");
    for (int i = 0; i < n + 1; i++) printf("%d ", b[i]);
    printf("\n");

    free(a); free(b);
    return 0;
}
