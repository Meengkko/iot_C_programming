#include <stdio.h>

int main(){

		int number1;

		printf("정수를 하나 입력하세요. ");
		scanf("%d",&number1);

		switch (number1)
		{
			case 1:
			case 2:
				printf("입력받은 숫자는 1 또는 2입니다.\n");
				break;
			case 3:
			case 4:
				printf("입력받은 숫자는 3 또는 4입니다.\n");
				break;
			default:
				printf("default\n");
				break;
		}

		if(number1 == 1 || number1 == 2)
				printf("입력받은 숫자는 1 또는 2입니다.\n");
		else if(number1 == 3 || number1 == 4)
				printf("입력받은 숫자는 3 또는 4입니다.\n");
		else
				printf("default\n");
		// if문을 사용할 경우 조건을 일일이 나누어 주어야하는 번거로움이
		// 있다.
		return 0;
}
