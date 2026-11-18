#include <stdio.h>
int main(void) {
    FILE *fp = fopen("d31_note.text", "w");
    if (fp == NULL) {
        printf("fopen failed\n");
        return 1;
    }
    fprintf(fp, "%d %s\n",1,"alpha");
    fprintf(fp, "%d %s\n",2,"beta");
    fprintf(fp, "%d %s\n",3,"gamma");
    fclose(fp);
    printf("写完了\n");
    fp = fopen("d31_note.text", "r");
    if (fp == NULL) {
        printf("fopen failed\n");
        return 1;
    }
    char buf[64];
    int n=0;
    while (fgets(buf,64, fp) != NULL){
        printf("%d:%s",++n, buf);
    }
    fclose(fp);
    return 0;
}