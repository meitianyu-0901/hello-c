#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "hello";
    char dst[20];

    printf("sizeof(s) = %d\n", (int)sizeof(s));
    printf("strlen(s) = %d\n", (int)strlen(s));
    printf("s[4] = %c, s[5] = %d\n", s[4], s[5]);

    strcpy(dst, s);
    printf("dst = %s, strlen(dst) = %d\n", dst, (int)strlen(dst));

    return 0;
}
