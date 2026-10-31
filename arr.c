#include <stdio.h>

int main(void) {
    int a[5] = {3, 88, 120, 7, 45};
    int i;
    int max = a[0];
    int min = a[0];

    /* 1. 遍历打印，下标从 0 到 4 */
    for (i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    /* 2. 从第 2 个元素开始比，逐个更新最大最小 */
    for (i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("max = %d\n", max);
    printf("min = %d\n", min);

    /* 3. 越界实验：删掉下一行开头的 // 再编译运行 */
    printf("a[5] = %d\n", a[5]);

    return 0;
}
