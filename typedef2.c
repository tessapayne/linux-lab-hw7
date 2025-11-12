#include <stdio.h>

typedef struct {
    double x, y, z;
} 
Vector;

Vector add_vectors(Vector u, Vector v) {
    Vector w;
    w.x = u.x + v.x;
    w.y = u.y + v.y;
    w.z = u.z + v.z;
    return w;
}

int main(void) {
    Vector a, b;

    printf("Enter vector A (x y z): ");
    if (scanf("%lf %lf %lf", &a.x, &a.y, &a.z) != 3)
{
        puts("Invalid input.");
        return 1;
    }

    printf("Enter vector B (x y z): ");
    if (scanf("%lf %lf %lf", &b.x, &b.y, &b.z) != 3) 
{
        puts("Invalid input.");
        return 1;
    }

    Vector s = add_vectors(a, b);
    printf("A + B = (%.2f, %.2f, %.2f)\n", s.x, s.y, s.z);

    return 0;
}
