#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int age;
    double score;
};

int main(void)
{
    struct Student s = {"Zhang San", 19, 88.5};
    struct Student *ptr = &s;

    printf("=== 1 三种写法取同一个成员 ===\n");
    printf("s.name      = %s\n", s.name);
    printf("ptr->name   = %s\n", ptr->name);
    printf("(*ptr).name = %s\n", (*ptr).name);
    printf("s.age = %d, ptr->age = %d, (*ptr).age = %d\n", s.age, ptr->age, (*ptr).age);

    printf("=== 2 ptr 的值等于谁的地址 ===\n");
    printf("ptr        = %p\n", (void *)ptr);
    printf("&s         = %p\n", (void *)&s);
    printf("s.name     = %p\n", (void *)s.name);
    printf("&s.age     = %p\n", (void *)&s.age);
    printf("ptr 与 &s     相差 %ld 字节\n", (long)((char *)ptr - (char *)&s));
    printf("ptr 与 s.name 相差 %ld 字节\n", (long)((char *)ptr - (char *)s.name));
    printf("&s.age 与 ptr 相差 %ld 字节\n", (long)((char *)&s.age - (char *)ptr));

    printf("=== 3 两条路改的是同一块内存 ===\n");
    ptr->age = 20;
    printf("ptr->age = 20 之后：s.age = %d\n", s.age);
    (*ptr).age = 21;
    printf("(*ptr).age = 21 之后：s.age = %d, ptr->age = %d\n", s.age, ptr->age);

    /* 第 40 行对照：把下面一行开头的 // 删掉，重编译，看编译器报什么 */
    //printf("%d\n", ptr.age); 

    return 0;
}
