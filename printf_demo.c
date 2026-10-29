#include <stdio.h>

int main(void) {
    int    n = 42;
    char   c = 'A';
    char   s[] = "hello";
    float  f = 3.14f;
    double d = 1.0 / 3;

    printf("%d\n", n);             /* 整数 */
    printf("%c\n", c);             /* 单个字符 */
    printf("%s\n", s);             /* 字符串 */
    printf("%f\n", f);             /* 小数，默认留 6 位 */
    printf("%p\n", (void *)&n);    /* n 的地址 */
    printf("%x\n", 16);           /* 十六进制 */
    printf("%d\n", c);             /* 字符 A 的数字身份 */
    printf("%d\n", s[1]);          /* 字符 e 的数字身份 */
    printf("%f\n", d);             /* 1 除以 3 */

    return 0;
}
