#include <stdio.h>
#include "util.h"
int main(void){
    printf("lines = %d\n",count_lines("d31_note.text"));
    printf("chars = %ld\n",count_chars("d31_note.text"));
    return 0;
}