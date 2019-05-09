#include <stdio.h>

int main(){

	int balance = 10000;
	int age;

    scanf("%d", &age);

	if(7<=age && age<=12)
			balance -= 450;
	else if(13<=age && age<=18)
			balance -= 720;
	else
			balance -= 1200;
	
	printf("%d",balance);	
	
	return 0;
}
