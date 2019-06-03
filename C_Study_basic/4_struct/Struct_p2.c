#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma warning (disable:4996)

struct employee {
	char name[20];
	char IDnum[20];
	long long pay;
};

void main() {

	struct employee Employee[3];
	int N=0;
	int i;

	system("chcp 949");

	while (N<3) {
		fputs("이름 주민번호 급여순 입력 : ", stdout);
		scanf("%s %s %lld", Employee[N].name, Employee[N].IDnum, &Employee[N].pay);
		if (!strcmp((Employee[N].name),"종료")){
			break;
		}
		N++;
	}

	printf("\n이름\tID번호\t급여\n\n");

	for (i = 0; i < N; i++) {
		printf("%s\t%s\t%lld\n", Employee[i].name, Employee[i].IDnum, Employee[i].pay);
	}
}
