#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

struct employee {
	char name[20];
	char IDnum[20];
	long long pay;
};

void main() {

	struct employee Employee;

	system("chcp 949");

	fputs("�̸� �ֹι�ȣ �޿��� �Է� : ", stdout);
	scanf("%s %s %lld", Employee.name, Employee.IDnum, &Employee.pay);

	printf("�̸�\t�ֹι�ȣ\t�޿�\n\n");

	printf("%s\t%s\t%lld\n", Employee.name, Employee.IDnum, Employee.pay);
	
}
