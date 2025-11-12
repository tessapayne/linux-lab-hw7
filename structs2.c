#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} 
Point;

double distance(Point a, Point b) {
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}

int main(void) {
    Point p, q;

    printf("Enter point P (x y): ");
    if (scanf("%lf %lf", &p.x, &p.y) != 2) 
{ 
    puts("Input error."); return 1; }

    printf("Enter point Q (x y): ");
    if (scanf("%lf %lf", &q.x, &q.y) != 2) 
{ 
   puts("Input error."); return 1; }

    printf("Distance(P,Q) = %.6f\n", distance(p, q));
    return 0;
}
