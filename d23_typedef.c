#include <stdio.h>
struct Student{
    char name[20];
    int score;
};
typedef struct Student Stu;
int main(void){
    Stu a = {"张三",90};
    printf("name:%s,score:%d\n",a.name,a.score);
    Stu b = {"李四",85};
    printf("name:%s,score:%d\n",b.name,b.score);
    printf("sizeof(struct Student):%zu\n",sizeof(struct Student));
    printf("sizeof(Stu):%zu\n",sizeof(Stu));
    
    return 0;
}
