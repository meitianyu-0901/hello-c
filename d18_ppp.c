#include <stdio.h>

int main(void)
{
    int a = 42;
    int b = 7;

    int *p = &a;      /* p 里存 a 的地址 */
    int **pp = &p;    /* pp 里存 p 自己的地址 */

    printf("=== 三层的地址 ===\n");
    printf("&a   = %p   (a 住的格子)\n", (void *)&a);
    printf("p    = %p   (p 里存的地址，应等于 &a)\n", (void *)p);
    printf("&p   = %p   (p 自己的地址，另一格)\n", (void *)&p);
    printf("pp   = %p   (pp 里存的地址，应等于 &p)\n", (void *)pp);
    printf("&pp  = %p   (pp 自己的地址)\n", (void *)&pp);

    printf("=== 逐层剥 ===\n");
    printf("a    = %d\n", a);
    printf("*p   = %d   (剥一层，得到 a)\n", *p);
    printf("*pp  = %p   (剥一层，得到 p 的值 = &a)\n", (void *)*pp);
    printf("**pp = %d   (剥两层，得到 a)\n", **pp);

    printf("=== 大小 ===\n");
    printf("sizeof(p)  = %d\n", (int)sizeof(p));
    printf("sizeof(pp) = %d\n", (int)sizeof(pp));

    /* 下面五行先注释着。删掉每行开头的 // 再编译一次，看 a 与 p 各自怎么变 */
    **pp = 99;
    printf("改 **pp 之后：a = %d, *p = %d\n", a, *p);
    *pp = &b;
    printf("改 *pp 之后：a = %d, *p = %d, **pp = %d\n", a, *p, **pp);

    return 0;
}
