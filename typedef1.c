#include <stdio.h>

typedef int Integer;

int main(void) {
    Integer a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        puts("Invalid input.");
        return 1;
    }

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);

    if (b != 0) {
        printf("a / b = %d\n", a / b);    
        printf("a %% b = %d\n", a % b);  

    } else {
        puts("a / b = undefined (division by zero)");
        puts("a % b = undefined (division by zero)");
    }

    return 0;
}
