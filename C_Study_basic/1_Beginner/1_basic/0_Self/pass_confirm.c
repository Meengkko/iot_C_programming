#include <stdio.h>

void main(){
	
	int Korean, English, Math, Science;

	float average;

	scanf("%d %d %d %d",&Korean,&English,&Math,&Science);

	average = (Korean+English+Math+Science)/4;

	if(Korean < 0 || Korean > 100 || English < 0 || English > 100 || Math < 0 || Math > 100 || Science < 0 || Science > 100)
		printf("잘못된 점수");
	else
	{
		if(average > 85)
			printf("합격");
		else
			printf("불합격");
	}
}
