#include "util.h"
#include <stdio.h>
#include <string.h>
int count_lines(const char *path){
    FILE *fp = fopen(path, "r");
    if (fp == NULL)
    {
        return -1;
    }
    int n = 0;
    char buf[64];
    while (fgets(buf, sizeof(buf), fp) != NULL)
    {
        n++;
    }
    fclose(fp);
    return n;
}
long count_chars(const char *path){
    FILE *fp = fopen(path, "r");
    if (fp == NULL)
    {
        return -1;
    }
    long c = 0;
    char buf[64];
    while (fgets(buf, sizeof(buf), fp) != NULL)
    {
        c += strlen(buf);
    }
    fclose(fp);
    return c;
}