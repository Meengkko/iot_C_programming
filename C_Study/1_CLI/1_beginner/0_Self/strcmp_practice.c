#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char input_string1[30];
    char input_string2[30];
    
    scanf("%s %s",input_string1,input_string2);
    
    printf("%d",strcmp(input_string1, input_string2));

    return 0;
}
