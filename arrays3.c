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
    int *ev = malloc(sizeof(int) * n);
    int *od = malloc(sizeof(int) * n);
    if (!a || !ev || !od) 
{ 
    puts("Allocation failed."); 
	free(a); 
	free(ev); 
	free(od); 
	return 1; }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) 
{
        if (scanf("%d", &a[i]) != 1) 
{ puts("Invalid input."); 
	free(a); 
	free(ev); 
	free(od); 
	return 1; }
    }

    int ce = 0, co = 0;
    for (int i = 0; i < n; i++) 
{
        if (a[i] % 2 == 0) ev[ce++] = a[i];
        else od[co++] = a[i];
    }

    printf("Even: ");
    for (int i = 0; i < ce; i++) printf("%d ", ev[i]);
    printf("\nOdd:  ");
    for (int i = 0; i < co; i++) printf("%d ", od[i]);
    printf("\n");

    free(a); free(ev); free(od);
    return 0;
}
