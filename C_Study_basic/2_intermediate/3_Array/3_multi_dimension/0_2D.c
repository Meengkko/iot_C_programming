#include <stdio.h>
#include <math.h>

void main(){
	char * Preference[3] = {"����", "�ݴ�", "����"};
	char * Sex[3] = {"����", "����", "����"};
	int ContingTable[3][3] = {0};
	int sum=0;
	int i, j;

	printf("\n� ��å�� ���� ����/������ ������ ���� �м�\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n\t������ �Է�:(%s,%s) ",Preference[i], Sex[j]);
			scanf("%d",&ContingTable[i][j]);
			sum = sum + ContingTable[i][j];
		}
		ContingTable[i][2] = sum;
		sum = 0;
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum = sum + ContingTable[j][i];
		}
		ContingTable[2][i] = sum;
		ContingTable[2][2] += sum;
		sum = 0;
	}
	printf("\n\t\t<�� �� ǥ>\n");
	printf("\n\t     %s %s %s\n\n", Sex[0], Sex[1], Sex[2]);
	for(i=0;i<3;i++){
		printf("\t%s",Preference[i]);
		for(j=0;j<3;j++){
			printf("%5d",ContingTable[i][j]);
		}
		printf("\n\n");
	}
}
