#include <stdio.h>

union Data {
    int   i;
    float f;
    char  c;
};

int main(void) {
    union Data u;

    printf("sizeof(union Data) = %zu bytes\n", sizeof(union Data));
    printf("sizeof(int)=%zu, sizeof(float)=%zu, sizeof(char)=%zu\n\n",
           sizeof(int), sizeof(float), sizeof(char));

    u.i = 42;
    printf("After u.i = 42 -> u.i = %d\n", u.i);

    u.f = 3.14f;
    printf("After u.f = 3.14 -> u.f = %.2f\n", u.f);

    u.c = 'A';
    printf("After u.c = 'A' -> u.c = %c\n", u.c);

    puts("\nNote: A union shares one memory area for all members.");
    puts("      Only the last written member should be read.");

    return 0;
}

