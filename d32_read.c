/* d32_read.c —— 第 32 天：按行读文件，统计行数与字符数
 *
 * 编译：gcc d32_read.c -o d32_read.exe -Wall -fexec-charset=GBK
 *
 * 【今晚已完成】行数：跑出 lines:3，与 d31_note.text 的三条记录对得上。
 * 【明天要补】字符数。两个必须先想清楚再动手的判断，不是打字问题：
 *   1、换行符算不算一个字符？
 *   2、Windows 下文件里存的是 \r\n，文本模式读进来 \r 被吞掉、只剩 \n，
 *      所以「字符数」和「文件字节数」天生对不上，这不是 bug。
 * 【待办】这个文件还没提交，明天连字符数一起收尾再 commit。
 */
#include <stdio.h>
#include <string.h>
int main(void){
    FILE *fp = fopen("d31_note.text", "r");
    if (fp == NULL) {
        printf("fopen failed\n");
        return 1;
    }
    /* 【要点 1】buf 的大小决定一次读几个：最多 64-1 = 63 个，最后一格留给 '\0'。
     * 今晚实测：把它改成 char buf[8]，这个文件里 8 字节的行正好读不全，
     * 会被切成两段，lines 从 3 变成 5。 */
    char buf[64];
    int lines=0;
    int chars=0;
    /* 【要点 2】fgets 返回的是 char*（读到的字符串首地址），不是读到的字符个数。
     * 读不到东西（到文件末尾或出错）时返回 NULL，while 靠这个 NULL 停下。
     * 【要点 3】每读一行，行末的 '\n' 也在 buf 里——统计字符数时必须决定算不算它，
     * 这个决定会直接改变最后打印出来的那个数。 */
    while (fgets(buf,64, fp) != NULL){
        chars += strlen(buf);
        printf("%s",buf);
        lines++;
    }
    fclose(fp);
    printf("lines:%d\n",lines);
    printf("chars:%d\n",chars);
    return 0;
}
