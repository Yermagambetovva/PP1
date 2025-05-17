#include <stdio.h>
int main (){
    unsigned int n;
    scanf("%u", &n);
    printf("%u\n", n ^ 0b111111111);
    return 0;
}
