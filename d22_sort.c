#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    float score; 
};
int main(void){
    struct Student s[3] = {{"张三",96.5},{"李四",99.5},{"王五",92.5}};
    for(int i=0;i<3;i++){
        printf("name:%s,score:%f\n",s[i].name,s[i].score);
    }
    printf("按分数大小排序后：\n");
    struct Student t;
    for(int i=0;i<2;i++){
        for(int j=0;j<2-i;j++){
            if (s[j].score<s[j+1].score){
                t = s[j];
                s[j] = s[j+1];
                s[j+1]=t;
            }
        }
    }
     for(int i=0;i<3;i++){
        printf("name:%s,score:%f\n",s[i].name,s[i].score);
    }
    return 0;
}