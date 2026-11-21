/* d31_file.c —— 第 31 天：fopen / fprintf / fclose 写三条记录，再读回来
 *
 * 编译：gcc d31_file.c -o d31_file.exe -Wall -fexec-charset=GBK
 *       漏掉最后这个参数，中文输出就是乱码（11-17 已经踩过一次）
 * 运行：会在当前目录生成 d31_note.text
 *       注意后缀是 .text 不是 .txt，写和读两处的名字必须一字不差
 */
#include <stdio.h>
int main(void) {
    /* 【要点 1】fopen 交回来的是一把开着的门钥匙，必须接住。
     * 写成 fopen(..., "w"); 不接住，程序有时照样能跑——那不是对，
     * 是 fclose 腾出来的那块 FILE 内存被下一个 fopen 原地复用了（实测两次同址）。
     * 【要点 2】打不开时返回 NULL，必须判；不判就是拿着空钥匙去开门。
     * 【要点 3】"w" 在打开的瞬间就把原内容清空了，不是等 fclose 才清。 */
    FILE *fp = fopen("d31_note.text", "w");
    if (fp == NULL) {
        printf("fopen failed\n");
        return 1;
    }
    /* 【要点 4】fprintf 只是把内容写进缓冲区，fclose 才真正落盘。
     * 不 fclose 时，程序正常退出靠系统兜底刷新，中途崩了就全丢。 */
    fprintf(fp, "%d %s\n",1,"alpha");
    fprintf(fp, "%d %s\n",2,"beta");
    fprintf(fp, "%d %s\n",3,"gamma");
    fclose(fp);
    printf("写完了\n");
    /* 【要点 5】这里就是第 31 天返工的地方：上一版漏了 `fp = `。
     * 漏了也读出三行，纯属巧合；判断标准是有没有赋值，不是有没有输出。 */
    fp = fopen("d31_note.text", "r");
    if (fp == NULL) {
        printf("fopen failed\n");
        return 1;
    }
    /* 【要点 6】fgets(buf, 64, fp)：一次最多读 63 个字符，
     * 最后一格自动填 '\0' 当句号，所以 buf 要比最长的一行多开 1 个字节。
     * 【要点 7】返回值读不到东西（到文件末尾或出错）时为 NULL，while 靠它停。
     * 【要点 8】行末的 '\n' 会被一起读进来，%s 打印时自带换行，printf 里不用再加。 */
    char buf[64];
    int n=0;
    while (fgets(buf,64, fp) != NULL){
        printf("%d:%s",++n, buf);
    }
    fclose(fp);
    return 0;
}
