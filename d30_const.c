#include <stdio.h>
void counter(void){
    static int c = 0;
    c++;
    printf("c = %d\n",c);
}
int main(){
    counter();
    counter();
    int x=10;
    const int *p = &x;
    printf("*p = %d\n",*p);
    int * const q = &x;
    printf("*q = %d\n",*q);
    const int * const r = &x;
    printf("*r = %d\n",*r);
    int y =20;
    p=&y;
    printf("*p = %d\n",*p);
    return 0;
}