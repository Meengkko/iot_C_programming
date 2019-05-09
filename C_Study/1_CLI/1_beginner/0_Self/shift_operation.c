#include <stdio.h>

void main(){
    unsigned long long number;
    scanf("%llu",&number);
    printf("%llu",number<<20>>4);
}
