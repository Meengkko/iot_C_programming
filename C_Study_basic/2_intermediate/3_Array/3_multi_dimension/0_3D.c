#include <stdio.h>

void main(){
	
	char *Verdicted[2] = {"White","Black"};
	char *Victim[2] = {"White","Black"};
	int FloridaCase[2][2][2] = {
		{
			{53,414},
			{11,37}
		},
		{
			{0,16},
			{4,139}
		}
	};
	int marginalFl[2][2] = {0};
	int i,j,k;

	printf("1976~1987 �÷θ����� ��������\n\n");
	printf("������\t�ǰ�\t����\t����X\t����\n\n");

	for(i=0; i<2; i++){
		printf("%s",*(Victim+i));
		for(j=0; j<2; j++){
			printf("\t%s",*(Verdicted+j));
			for(k=0; k<2; k++){
				printf("\t%4d",FloridaCase[i][j][k]);
			}
			printf("\t%4.2lf",(double)FloridaCase[i][j][0]/FloridaCase[i][j][1]*100);
			printf("\n\n");
		}
	}
	
	printf("�� �ڷῡ���� ��� ������ ���ػ�ʿ��� ������ ��������޴� ������ �� ���� ������ ���Դϴ�.\n\n");
	_getch();
	printf("�׷��� �������� ������ ������� �ʰ� �ǰ��� ������ ������ �ξ������� ���� ���� �ٸ� ����� �� �� �ֽ��ϴ�.\n\n");
	_getch(); 
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			for(k=0; k<2; k++){
				marginalFl[i][j] = marginalFl[i][j] + FloridaCase[k][i][j];
			}
		}
	}
	
	printf("\t�ǰ�\t����\t����X\t����\n\n");
	for(i=0; i<2; i++){
		printf("\t%s",*(Verdicted+i));
		for(j=0; j<2; j++){
			printf("\t%4d",marginalFl[i][j]);
		}
		printf("\t%4.2lf",(double)marginalFl[i][0]/marginalFl[i][1]*100);
		printf("\n\n");
	}
	printf("��ó�� �ֺ� �������� ���Ǻ� �������� �ٸ� ������ ���� ���� ������ �� �� ������\n\n");
	_getch(); 
	printf("�̰��� Simpson�� �����̶�� �մϴ�.");
}
