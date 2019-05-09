#include <stdio.h>

void main(){
    
    unsigned int number1, number2;
    
    scanf("%u %u",&number1,&number2);
    
    printf("%u\n",number1^number2);
    printf("%u\n",number1|number2);
    printf("%u\n",number1&number2);
    printf("%u",~number1);
}
