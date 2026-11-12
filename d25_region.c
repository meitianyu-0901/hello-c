#include <stdio.h>
int g = 1;
static int sg = 2;
int main(){
    int l;
    l = 1;
    static int sl = 4;
    char *p = "abc";
    printf("g %p\n",(void*)&g);
    printf("sg %p\n",(void*)&sg);
    printf("l %p\n",(void*)&l);
    printf("sl %p\n",(void*)&sl);
    printf("p %p\n",(void*)p);
    return 0;
}