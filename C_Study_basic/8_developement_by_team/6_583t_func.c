// #include "header\7_val.h" // <- windows Style
// Windows 상에서 Linux Style O

// #include "header/7_val.h" // <- Linux Style 이걸 쓰자!
// Linux 상에서 Windows Style X

// #include "C:\iot_bigdata\C_Study_basic\8_developement_by_team\release\header\7_val.h"

#include "../header/7_val.h"
// 절대경로 지정시 가장 큰 문제점은 상호 운영성이 떨어진다.
// 컴퓨터마다 절대경로가 다른 경우
// Linux상에서 \가 인식이 되지 않는 경우

// extern int num = 10; <== extern 변수는 선언한 파일에서만 초기화가 가능
// 실무에서는 extern을 사용하지 않도록 권고하고 있다.

void Increment(){
	num++;
}

int GetNum(){
	return num;
}
