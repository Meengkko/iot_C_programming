#include <stdio.h>

void main(){
	
	float score_kor;
	float score_eng;
	float score_math;
	float Average;
	char grade;

	printf("\n각 과목의 점수를 모두 입력하십시오.(국어,영어,수학): ");
	scanf("%f,%f,%f",&score_kor,&score_eng,&score_math);

	Average = (score_kor + score_eng + score_math)/3;

	if(Average >= 90){
		grade = 'A';
//		printf("\n당신의 학점은 %c 입니다.", grade);
	}else if(Average >= 80){
		grade = 'B';
//		printf("\n당신의 학점은 %c 입니다.", grade);
	}else if(Average >= 70){
		grade = 'C';
//		printf("\n당신의 학점은 %c 입니다.", grade);
	}else if(Average >= 50){
		grade = 'D';
//		printf("\n당신의 학점은 %c 입니다.", grade);
	}else{
		grade = 'F';
//		printf("\n당신의 학점은 %c 입니다.", grade);
	}
	//중복성을 제거하기위해 코드를 이렇게 바꾼다.
	printf("\n당신의 학점은 %c 입니다.", grade);
}
