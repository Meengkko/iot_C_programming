#include <stdio.h>

void main(){
	int year=0;  // �����⵵
	int sentence_year=20;  // ������
	int jail_break_year=7; // Ż�����ɳ⵵
	int physical_level=0;  // ü��

	printf("\n%d�� ������ �޾� �Լ��մϴ�.\n\n",sentence_year);
	while(1){
		year++;
		if(year % 2 == 0){
			physical_level++;
		}
		printf("%d�� ���Ծ����ϴ�. ü��: %d \n\n", year, physical_level);
		if(year>jail_break_year){
			printf("Ż��õ�!\n");
			if(physical_level > 5){
				break; // ���� ����� 10���ο� �ִ� while�� ����� �Ѵ�.
			}
		}
	}
	printf("Ż�⼺��! \n");
}	
