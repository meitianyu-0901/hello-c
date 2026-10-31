#include <stdio.h>
int main(void){
    int s=0;
    for (int i=1;i<=100;i++){
        if (i%2==0) s += i;
    }
    printf("for version: %d\n",s);
    int t = 0;
    int j = 1;
    while(j<=100){
        if(j%2==0)t+=j;
        j++;
    }
    printf("whlie version: %d\n",t);
    return 0;
}