#include <stdio.h>

int main(void) {
    printf("char    = %zu\n", sizeof(char));
    printf("short   = %zu\n", sizeof(short));
    printf("int     = %zu\n", sizeof(int));
    printf("long    = %zu\n", sizeof(long));
    printf("float   = %zu\n", sizeof(float));
    printf("double  = %zu\n", sizeof(double));

    int a[5];
    printf("int[5]  = %zu\n", sizeof(a));
    printf("int*    = %zu\n", sizeof(int*));
    printf("char*   = %zu\n", sizeof(char*));
    printf("double* = %zu\n", sizeof(double*));
    printf("&a[0]   = %zu\n", sizeof(&a[0]));

    return 0;
}
