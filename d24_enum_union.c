#include <stdio.h>
int main(){
    enum State { IDLE,RUN,FAULT };
    printf("%d ",IDLE);
    printf("%d ",RUN);
    printf("%d\n",FAULT);
    enum State s = RUN;
    switch (s)
    {
    case IDLE:
        printf("空闲\n");
        break;
    case RUN:
        printf("运行\n");
        break;
    case FAULT:
        printf("故障\n");
        break;
    default:
        break;
    }
    union Value
    {
        int i;float f;char c[4];
    };
    printf("%zu\n",sizeof(union Value));
    union Value v;
    v.i = 0x41424344;
    for(int j=0;j<4;j++){
        printf("%c",v.c[j]);
    }
    return 0;
}