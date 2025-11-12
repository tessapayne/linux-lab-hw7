#include <stdio.h>

int main(void) {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) 
{
        printf("Invalid input.\n");
        return 1;
    }

    float as_float = (float)num;

    printf("Integer value: %d\n", num);
    printf("As float: %.2f\n", as_float);

    return 0;
}
