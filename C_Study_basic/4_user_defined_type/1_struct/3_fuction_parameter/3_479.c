#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

typedef struct {
	char name[20];
	char phoneNum[20];
	int age;
} Person;

void ShowPersonInfo(Person man) {
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phoneNum);
	printf("age: %d \n", man.age);
}

// �Լ��� �⺻������ �� ���� ���� ������ �� �ִ�.
// ������ �Ʒ��� ���� ����ü�� ����Ѵٸ� ����ü�� ����� Ȱ���Ͽ�
// �������� 2�� �̻��� ���� ���Ͽ� ������ �����ϴ�.
Person ReadPersonInfo() {
	Person man;
	printf("name? "); scanf("%s", man.name);
	printf("phone? "); scanf("%s", man.phoneNum);
	printf("age? "); scanf("%d", &man.age);
	return man;
}

void main() {

	system("chcp 949");
// ����ü�� ���ϼ��� ���� struct ���� ���Ͽ� C���� �����ϴ� ���
// �⺻���� ���� ���� ������ �����ϰ� �ִ�.
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
}
