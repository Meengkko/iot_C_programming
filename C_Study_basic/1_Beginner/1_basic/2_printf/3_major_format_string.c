#include <stdio.h>

void main(){
	// %d : 부호있는 정수 (0을 포함한 양수, 음수)
	printf("현재 온도: %d도\n",5); // 5는 양수
	printf("현재 온도: %d도\n",-3); // -3은 음수
	//\n 이 2개가 왔기 때문에 2줄이 바뀐다.
	printf("현재 온도: %d도\n\n",0);

	// %u : 부호없는 정수 (0을 포함한 양수)
	printf("현재 고도: %um\n",5); // 5는 양수
	// %u는 음수는 처리되지 않기 때문에
	// -3인 경우 값이 왜곡된다. 따라서
	// -3을 사용하지 말거나 format string을 변경해야 한다.
	printf("현재 고도: %um\n",-3);
	// %u는 0을 표현 할 수 있다.
	printf("현재 고도: %um\n\n",0);

	// %f 부호가 있는 실수(소수점을 포함한 숫자)
	printf("원주율: %f...\n", 3.141592);
	// %f를 사용할 경우 기본적으로 소수점 6자리를 보여준다.
	// 이는 printf를 제공하는 컴파일러에 따라 다르다.
	printf("-23/57 = %f...\n", -0.40350844);
	printf("현재 고도: %fm\n",5.12);
	printf("현재 고도: %fm\n\n", 0);

	// %c 한 개의 문자(1byte형)
	// 알파벳을 포함한 일반 문자는 1byte를 차지한다.
	// '(Single quotation, 홑따옴표) 사이에 원하는 문자 1개를 넣는다.
	printf("귀하의 성적은 %c 입니다.\n",'A');
	// 한글은 2byte이기 때문에 %c로는 정상적으로 처리가 불가능하다.
	printf("귀하의 성적은 %c 입니다.\n",'가');
	printf("귀하의 성적은 '%c' 입니다.\n\n",'A');

	// %s 문자열
	// "(Double quotation, 쌍따옴표) 사이에 원하는 문자열(문자의 조합)을 넣는다.
	printf("나의 좌우명은 '%s' 입니다.\n","내 사전에 불가능은 없다.");
// 아래 코드는 format string이 문자열 밖에 있기 때문에 문법적으로 오류이다.
//	printf("나의 좌우명은 "%s" 입니다.\n","내 사전에 불가능은 없다.");
	printf("나의 좌우명은 \"%s\" 입니다.\n\n","내 사전에 불가능은 없다.");
	
	// % 문자 출력
	// %를 출력하기 위해 % 한 개만 사용할 경우 format string을 위한 문법으로
	// 간주된다. 그리고 %뒤에 format string이 없기 때문에 무시되거나
	// 컴파일러에 따라 에러가 발생할 수 있다.
	printf("IoT 빅데이터반 취업률은 %d% 입니다.\n",98);
	printf("IoT 빅데이터반 취업률은 %d%% 입니다.\n",98);
}
