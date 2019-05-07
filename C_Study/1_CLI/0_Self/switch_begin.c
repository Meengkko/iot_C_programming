#include <stdio.h>

int main(){

		int number1;

		printf("정수를 하나 입력하세요. ");
		scanf("%d",&number1);

		switch (number1)
		{
			case 1:
				printf("입력받은 숫자는 1입니다.\n");
				break;
			case 2:
				printf("입력받은 숫자는 2입니다.\n");
				break;
			case 3:
				printf("입력받은 숫자는 3입니다.\n");
				break;
			default:
				printf("default\n");
				break;
		}
		return 0;
}
