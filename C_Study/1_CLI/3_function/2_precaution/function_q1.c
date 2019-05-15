#include <stdio.h>
int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);		

void main(){
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	if(GetAbsoValue(num1) == GetAbsoValue(num2)){
		printf("두 수의 절댓값이 같습니다!\n");
	}else{
		printf("%d와 %d중 절댓값이 큰 정수: %d \n",num1,num2,AbsoCompare(num1,num2));	
	}
}

int AbsoCompare(int num1, int num2){
	if(GetAbsoValue(num1)>GetAbsoValue(num2)){
		return num1;
	}else{
		return num2;
	}
}

int GetAbsoValue(int num){
	if(num<0){
		return num * (-1);
	}else{
		return num;
	}
}
