#include <stdio.h>
// 명령어 사이의 줄바꿈 수는 몇개가 되더라도 
// 실행하는데에는 영향을 미치지 않는다. 




//int AbsoCompare(int num1,int num2); 
//int				 AbsoCompare(int num1,int num2); 
// 함수의 리턴타입, 인자의 리턴타입, 인자명 사이의 공백 또는 탭은 몇 개가 와도
// 실행에 영향을 주지 않는다.
//int AbsoCompare(int			 num1,int num2); 
//int AbsoCompare(int   num1,  int num2); 
//int AbsoCompare(int num1	,int     num2); 
//int AbsoCompare(int   num1  ,int				 num2); 
//int 								AbsoCompare(int num1,int num2); 
//int AbsoCompare(			int num1 		,int        num2); 
//int AbsoCompare(int					 num1,              int num2         ); 
int AbsoCompare(int num1,int num2); 
int GetAbsoValue(int num);			

void main(){
// 변수 타입, 변수명 사이의 공백(탭)도 실행에 영향을 미치지 않는다.
//	int num1,   num2;
//	int     num1, num2;
//	int 			num1,				 num2;
//	int num1                                  , 		num2;
//	int          num1,            num2;
	int 			   num1;
	unsigned short int num2;
//  함수의 인자 사이에 공백도 실행에 영향을 미치지 않는다.
//  단, 문자열에서의 공백은 그대로 문자열의 내용에 반영된다.
//	printf("두 개의 정수 입력: ");
//	printf(  "두 개의 정수 입력: "  );
//	printf("      두    개의    정수    입력: ");
	printf("                  두 개의 정수 입력: ");
	scanf("%d %d",&num1,&num2);
//  가독성을 위해서 인자와 인자사이에 공백을 넣는 것이 좋다.
	printf("%d와 %d중 절댓값이 큰 정수: %d \n", 
					num1,num2,AbsoCompare(num1,num2));	
}

int AbsoCompare(int num1, int num2){
//	if(GetAbsoValue(num1)>GetAbsoValue(num2)){
//	관계 연산의 좌항 우항도 연산자와 구분을 하기 위하여 공백을 넣는 것이
//	가독성에 좋다.
//	if(GetAbsoValue(num1)>GetAbsoValue(num2)){
//	()가 여러개로 중첩되었을 때도 가독성을 위하여 공백을 넣는 것이 좋다.
	if( GetAbsoValue(num1) > GetAbsoValue(num2) ){
		return num1;
	}else{
		return num2;
	}
}

int GetAbsoValue(int num){
	if(num<0){
//		return num*(-1);
		return num * (-1);
	}else{
		return num;
	}
}
