#include <stdio.h>

typedef enum {
    MON = 1, TUE, WED, THU, FRI, SAT, SUN
} 
Day;

const char *day_name(Day d) 
{
    switch (d) 
{
        case MON: return "Monday";
        case TUE: return "Tuesday";
        case WED: return "Wednesday";
        case THU: return "Thursday";
        case FRI: return "Friday";
        case SAT: return "Saturday";
        case SUN: return "Sunday";
        default:  return "Invalid";
    }
}

int main(void) {
    int x;
    printf("Enter day number (1=Mon .. 7=Sun): ");
    if (scanf("%d", &x) != 1) 
{ 
    puts("Invalid input."); 
	return 1; }

    if (x < 1 || x > 7) 
{
        puts("Out of range.");
        return 1;
    }

    printf("Day: %s\n", day_name((Day)x));
    return 0;
}
