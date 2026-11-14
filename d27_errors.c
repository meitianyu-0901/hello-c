#include <stdio.h>
#include <stdlib.h>
void leak(void) { int *q = malloc(4096); q[0] = 1; }
int main(void) {
    int *p = malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++) {
        p[i] = (i + 1);
    }
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += p[i];
    }
    printf("sum = %d\n", sum);
    free(p);
    printf("p[0]=%d\n",p[0]);

    int guard = 12345;
    int a[3]={0};
    a[3]=99;
    printf("guard = %d\n",guard);
    printf("a[0]=%d\n",a[0]);
        for (int i = 0; i < 10000; i++) leak();
    printf("press enter\n");
    getchar();

    return 0;
}