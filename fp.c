#include <stdio.h>
int add(int x,int y){return x + y;}
int sub(int x,int y){return x - y;}
int main(){
    int(*fp)(int,int)=add;
    printf("fp(3,5) =%d\n",fp(3,5));
    printf("(*fp)(3,5) =%d\n",(*fp)(3,5));
    printf("add addr =%p\n",(void*)add);
    printf("fp addr =%p\n",(void*)fp);
    fp=sub;
    printf("fp 改为sub之后 fp(9,4)=%d\n",fp(9,4));
    return 0;
}