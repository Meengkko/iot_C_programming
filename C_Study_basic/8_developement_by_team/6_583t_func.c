// #include "header\7_val.h" // <- windows Style
// Windows �󿡼� Linux Style O

// #include "header/7_val.h" // <- Linux Style �̰� ����!
// Linux �󿡼� Windows Style X

// #include "C:\iot_bigdata\C_Study_basic\8_developement_by_team\release\header\7_val.h"

#include "../header/7_val.h"
// ������ ������ ���� ū �������� ��ȣ ����� ��������.
// ��ǻ�͸��� �����ΰ� �ٸ� ���
// Linux�󿡼� \�� �ν��� ���� �ʴ� ���

// extern int num = 10; <== extern ������ ������ ���Ͽ����� �ʱ�ȭ�� ����
// �ǹ������� extern�� ������� �ʵ��� �ǰ��ϰ� �ִ�.

void Increment(){
	num++;
}

int GetNum(){
	return num;
}
