#include <stdio.h>

void main(){
	
	float score_kor;
	float score_eng;
	float score_math;
	float Average;
	char grade;

	printf("\n�� ������ ������ ��� �Է��Ͻʽÿ�.(����,����,����): ");
	scanf("%f,%f,%f",&score_kor,&score_eng,&score_math);

	Average = (score_kor + score_eng + score_math)/3;

	if(Average >= 90){
		grade = 'A';
//		printf("\n����� ������ %c �Դϴ�.", grade);
	}else if(Average >= 80){
		grade = 'B';
//		printf("\n����� ������ %c �Դϴ�.", grade);
	}else if(Average >= 70){
		grade = 'C';
//		printf("\n����� ������ %c �Դϴ�.", grade);
	}else if(Average >= 50){
		grade = 'D';
//		printf("\n����� ������ %c �Դϴ�.", grade);
	}else{
		grade = 'F';
//		printf("\n����� ������ %c �Դϴ�.", grade);
	}
	//�ߺ����� �����ϱ����� �ڵ带 �̷��� �ٲ۴�.
	printf("\n����� ������ %c �Դϴ�.", grade);
}
