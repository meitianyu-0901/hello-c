#include <stdio.h>
#include <string.h>

int main(void)
{
    char *p = "abc";
    char  s[] = "abc";

    printf("sizeof(p) = %zu\n", sizeof(p));
    printf("sizeof(s) = %zu\n", sizeof(s));
    printf("strlen : p = %zu , s = %zu\n", strlen(p), strlen(s));
    printf("p 指向的地址 = %p\n", (void *)p);
    printf("s 自己的地址 = %p\n", (void *)s);
    printf("打印结果   : %s / %s\n", p, s);

    s[0] = 'X';
    printf("改 s[0] 之后: %s\n", s);

    printf("下面要改 p[0]，看会发生什么...\n");
    fflush(stdout);
    /* 第 22 行：把下面这行开头的 // 删掉，再重编译 */
    p[0] = 'X';
    printf("改 p[0] 之后: %s\n", p);
    return 0;
}
