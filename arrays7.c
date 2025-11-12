#include <stdio.h>
#define MAX 10

int main(void) {
    int n;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    printf("Enter matrix size n: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX) 
{
        puts("Invalid n (must be 1..10).");
        return 1;
    }

    printf("Enter matrix A (%d numbers): ", n * n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (scanf("%d", &A[i][j]) != 1) 
{ 
   puts("Invalid input."); 
	return 1; }

    printf("Enter matrix B (%d numbers): ", n * n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (scanf("%d", &B[i][j]) != 1) 
{ 
    puts("Invalid input."); 
	return 1; }

    for (int i = 0; i < n; i++) 
{
        for (int j = 0; j < n; j++) 
{
            int sum = 0;
            for (int k = 0; k < n; k++)
                sum += A[i][k] * B[k][j];
            C[i][j] = sum;
        }
    }

    printf("C = A * B:\n");
    for (int i = 0; i < n; i++) 
{
        for (int j = 0; j < n; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    return 0;
}

