#include <stdio.h>
#include <string.h>

typedef enum {
    SUCCESS = 0,
    FILE_NOT_FOUND,
    PERMISSION_DENIED,
    DISK_FULL,
    UNKNOWN_ERROR
} ErrorCode;

const char *err_name(ErrorCode c) {
    switch (c) 
{
        case SUCCESS:           return "SUCCESS";
        case FILE_NOT_FOUND:    return "FILE_NOT_FOUND";
        case PERMISSION_DENIED: return "PERMISSION_DENIED";
        case DISK_FULL:         return "DISK_FULL";
        default:                return "UNKNOWN_ERROR";
    }
}


ErrorCode simulate(const char *s) {
    if (strcmp(s, "ok")      == 0) return SUCCESS;
    if (strcmp(s, "missing") == 0) return FILE_NOT_FOUND;
    if (strcmp(s, "denied")  == 0) return PERMISSION_DENIED;
    if (strcmp(s, "full")    == 0) return DISK_FULL;
    return UNKNOWN_ERROR;
}

int main(void) {
    char s[32];
    printf("Enter scenario (ok/missing/denied/full): ");
    if (scanf("%31s", s) != 1) 
{
        puts("Invalid input.");
        return 1;
    }

    ErrorCode code = simulate(s);
    printf("Result: %s (%d)\n", err_name(code), code);
    return 0;
}

