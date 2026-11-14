#include <stdio.h>
int main(void){
    int a[3][4];
    int k=1;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            a[i][j]=k++;
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("%d %d ",*(*(a+i)+j),a[i][j]);
        }
        printf("\n");
    }
    printf("a=%zu\n",sizeof(a));
    printf("a[0]=%zu\n",sizeof(a[0]));
    printf("a=%p\n",(void*)a);
    printf("a[0]=%p\n",(void*)a[0]);
    printf("a[0][0]=%p\n",(void*)&a[0][0]);
    printf("a+1=%p\n",(void*)(a+1));
    printf("a[0]+1=%p\n",(void*)(a[0]+1));
    return 0;
}