#include <stdio.h>

int number_i = 0;
int number_i_plus = 1;
int maximum;
int temporary;
  
void fibbonaci(int maximum){
    while(number_i_plus < maximum)
    {
    temporary = number_i_plus;
    number_i_plus = number_i + number_i_plus;
    number_i = temporary;
    
    printf("%d\n", number_i);
    }
}
void main(){
	scanf("%d",&maximum);
	printf("%d\n",number_i);
	fibbonaci(maximum);
}
