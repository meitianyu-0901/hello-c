#include <stdio.h>
#define SET_BIT(x,n)((x)|(1u << (n)))
#define CLR_BIT(x,n)((x)&~(1u << (n)))
#define GET_BIT(x, n) (((x) >> (n)) & 1u)
#define FLIP_BIT(x, n) ((x) ^ (1u << (n)))
int main(){
    unsigned char a = 0xF0;
    printf("a = %d\n",a);
    printf("a = 0x%02x\n",a);
    printf("SET_BIT(a,3) = %d(%02x)\n",SET_BIT(a,3),SET_BIT(a,3));
    printf("CLR_BIT(a,4) = %d(%02x)\n",CLR_BIT(a,4),CLR_BIT(a,4));
    printf("GET_BIT(a,4) = %d(%02x)\n",GET_BIT(a,4),GET_BIT(a,4));
    printf("GET_BIT(a,0) = %d(%02x)\n",GET_BIT(a,0),GET_BIT(a,0));
    printf("FLIP_BIT(a,0) = %d(%02x)\n",FLIP_BIT(a,0),FLIP_BIT(a,0));

    return 0;
}