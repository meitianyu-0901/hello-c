#include <stdio.h>

/* 第一版：if/else。这一版已写好，当参考答案用 */
char grade_if(int score)
{
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'E';
}

/* 第二版：switch。等级字母留成 '?'，照上面那一版填 */
char grade_switch(int score)
{
    switch (score / 10) {
    case 10:
    case 9:  return 'A';
    case 8:  return 'B';
    case 7:  return 'C';
    case 6:  return 'D';
    default: return 'E';
    }
}

int main(void)
{
    int scores[] = {95, 90, 85, 72, 60, 59, 0};
    int i;

    printf("%-7s %-8s %-8s %s\n", "score", "if/else", "switch", "same?");
    for (i = 0; i < 7; i++) {
        char a = grade_if(scores[i]);
        char b = grade_switch(scores[i]);
        printf("%-7d %-8c %-8c %s\n", scores[i], a, b, (a == b) ? "yes" : "NO");
    }
    return 0;
}
