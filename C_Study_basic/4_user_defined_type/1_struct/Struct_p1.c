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

	fputs("이름 주민번호 급여순 입력 : ", stdout);
	scanf("%s %s %lld", Employee.name, Employee.IDnum, &Employee.pay);

	printf("이름\t주민번호\t급여\n\n");

	printf("%s\t%s\t%lld\n", Employee.name, Employee.IDnum, Employee.pay);
	
}
