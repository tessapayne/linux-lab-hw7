#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LEN 100

typedef struct {
    char  name[NAME_LEN];
    int   roll_number;
    float marks;
} 
Student;

static void strip_newline(char *s) {
    size_t n = strlen(s);
    if (n && s[n - 1] == '\n') s[n - 1] = '\0';
}

int main(void) {
    int n;
    Student a[MAX_STUDENTS];

    printf("Enter number of students (1..%d): ", MAX_STUDENTS);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_STUDENTS) 
{
        puts("Invalid count.");
        return 1;
    }

    int c; 
   while ((c = getchar()) != '\n' && c != EOF) { }

    for (int i = 0; i < n; i++) {
        printf("Student %d name: ", i + 1);
        if (!fgets(a[i].name, sizeof a[i].name, stdin)) 
{ 
    puts("Input error."); return 1; }
        strip_newline(a[i].name);

        printf("Student %d roll number: ", i + 1);
        if (scanf("%d", &a[i].roll_number) != 1) 
{ 
    puts("Input error."); return 1; }

        printf("Student %d marks: ", i + 1);
        if (scanf("%f", &a[i].marks) != 1) 
{ 
    puts("Input error."); return 1; }

        while ((c = getchar()) != '\n' && c != EOF) { } 
    }

    printf("\n--- Student List ---\n");
    for (int i = 0; i < n; i++) 
{
        printf("%2d) Name: %s | Roll: %d | Marks: %.2f\n",
               i + 1, a[i].name, a[i].roll_number, a[i].marks);
    }
    return 0;
}
