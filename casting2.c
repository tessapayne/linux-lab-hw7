#include <stdio.h>

int main(void) {
    double x;
    printf("Enter a decimal number: ");
    if (scanf("%lf", &x) != 1) 
{
        printf("Invalid input.\n");
        return 1;
    }

    int y = (int)x; 

    printf("Original double: %.2f\n", x);
    printf("After casting to int: %d\n", y);

    return 0;
}
