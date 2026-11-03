#include <stdio.h>

int main(void)
{
    int a[5] = {10, 20, 30, 40, 50};
    int i;

    printf("用 a[i] 访问：\n");
    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("用 *(a+i) 访问：\n");
    for (i = 0; i < 5; i++) {
        printf("*(a+%d) = %d\n", i, *(a + i));
    }

    printf("地址对照：\n");
    for (i = 0; i < 5; i++) {
        printf("&a[%d] = %p   a+%d = %p\n", i, (void *)&a[i], i, (void *)(a + i));
    }

    /* 第 4 步：把下面两行的注释去掉，重新编译 */
    *(a + 2) = 300; 
    printf("改完后 a[2] = %d\n", a[2]); 

    return 0;
}
