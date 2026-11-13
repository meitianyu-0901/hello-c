#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p = malloc(10 * sizeof(int));
    if (p == NULL) {
        printf("malloc failed\n");
        return 1;
    }
    for (int i = 0; i < 10; i++) {
        p[i] = (i + 1)*10;
    }
    int sum =0;
    for (int i = 0; i < 10; i++) {
        sum += p[i];
    }
    printf("sum = %d\n", sum);
    printf("p[9]=%d\n",p[9]);
    printf("p = %p\n",(void *)p);
    free(p);
    p = NULL;
    printf("p = %p\n",(void *)p);
    return 0;
}