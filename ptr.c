#include <stdio.h>
int main(void){
    int a=10;
    int *p= &a;
    printf("a = %d\n",a);
    printf("&a = %p\n",(void*)&a);
    printf("p = %p\n",(void*)p);
    printf("*p = %d\n",*p);
    *p = 99;
    printf("after *p = 99;a = %d\n",a);
    return 0;
}