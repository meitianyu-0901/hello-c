#include <stdio.h>
int add(int x,int y){
   // x = 100;
    return x+y;
}
int max(int x,int y){
    if(x>y)return x;
    return y;
}
int main(void){
    int a=3,b=5;
    printf("调用前:a=%d b=%d\n",a,b);
    int s=add(a,b);
    printf("add 返回：%d\n",s);
    printf("调用后:a=%d b=%d\n",a,b);
    printf("max = %d\n",max(a,b));
    return 0;
}