#include <stdio.h>

/* 第一版：只换形参，出了函数就没了 */
void swap_wrong(int x, int y)
{
    int t = x;
    x = y;
    y = t;
}

/* 第二版：拿地址进去，改的是原件 */
void swap(int *x, int *y)
{
    /* 第 4 步：把下面这行的注释去掉，重新编译 */
    printf("swap 收到的地址：x = %p, y = %p\n", (void *)x, (void *)y); 

    int t = *x;
    *x = *y;
    *y = t;
}

int main(void)
{
    int a = 3, b = 5;

    printf("调用前：a = %d, b = %d\n", a, b);
    printf("a 的地址 = %p, b 的地址 = %p\n", (void *)&a, (void *)&b);

    swap_wrong(a, b);
    printf("swap_wrong 之后：a = %d, b = %d\n", a, b);

    swap(&a, &b);
    printf("swap 之后：a = %d, b = %d\n", a, b);

    return 0;
}
