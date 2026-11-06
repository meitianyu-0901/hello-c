#include <stdio.h>

/* 结构体：把几个不同类型的变量打包成一个整体 */
struct Student {
    char  name[20];   /* 姓名 */
    int   age;        /* 年龄 */
    float score;      /* 分数 */
};

/* 对齐验证用的小结构体：一个 char 加一个 int */
struct Pad {
    char c;
    int  i;
};

int main(void)
{
    struct Student s = {"Zhang San", 19, 87.5f};

    printf("=== 1、逐个成员打印 ===\n");
    printf("name  = %s\n", s.name);
    printf("age   = %d\n", s.age);
    printf("score = %.1f\n", s.score);

    printf("\n=== 2、大小与偏移 ===\n");
    printf("sizeof(s)      = %d\n", (int)sizeof(s));
    printf("sizeof(struct) = %d\n", (int)sizeof(struct Student));
    printf("offset name  = %d\n", (int)((char *)&s.name  - (char *)&s));
    printf("offset age   = %d\n", (int)((char *)&s.age   - (char *)&s));
    printf("offset score = %d\n", (int)((char *)&s.score - (char *)&s));

    printf("\n=== 3、对齐长出来的空洞 ===\n");
    printf("sizeof(struct Pad) = %d（1 加 4 却是这个数）\n", (int)sizeof(struct Pad));
    printf("offset c = %d\n", (int)((char *)&((struct Pad *)0)->c - (char *)0));
    printf("offset i = %d\n", (int)((char *)&((struct Pad *)0)->i - (char *)0));

    return 0;
}
