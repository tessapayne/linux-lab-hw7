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

    printf("Unique elements: ");
    for (int i = 0; i < n; i++) 
{
    int count = 0;
    for (int j = 0; j < n; j++) if (a[j] == a[i]) count++;
    if (count == 1) printf("%d ", a[i]);
    }
    printf("\n");

    free(a);
    return 0;
}
