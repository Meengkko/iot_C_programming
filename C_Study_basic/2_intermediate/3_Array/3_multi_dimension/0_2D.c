#include <stdio.h>
#include <math.h>

void main(){
	char * Preference[3] = {"지지", "반대", "총합"};
	char * Sex[3] = {"남성", "여성", "총합"};
	int ContingTable[3][3] = {0};
	int sum = 0;
	int i, j;
	double expectation = 0;
	double chi_square = 0;

	printf("\n어떤 정책에 대한 남성/여성의 지지율 차이 분석\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n\t조사결과 입력:(%s,%s) ",Preference[i], Sex[j]);
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
	printf("\n\t\t<분 할 표>\n");
	printf("\n\t     %s %s %s\n\n", Sex[0], Sex[1], Sex[2]);
	for(i=0;i<3;i++){
		printf("\t%s",Preference[i]);
		for(j=0;j<3;j++){
			printf("%5d",ContingTable[i][j]);
		}
		printf("\n\n");
	}

	for(i=0; i<2; i++){
		for(j=0;j<2;j++){
			expectation = ((double)ContingTable[i][2]*ContingTable[2][j])/ContingTable[2][2];
			chi_square = chi_square + pow(((double)ContingTable[i][j] - expectation),2)/expectation;
		}
	}

	printf("\n카이제곱 통계량은 %.2lf 입니다.\n\n",chi_square);
	
	if(chi_square > 3.84){
		printf("0.05 유의수준에서 이 정책에 대한 남녀의 선호가 같지않다고 할 수 있습니다.\n");
	}else if(chi_square > 6.63){
		printf("0.01 유의수준에서 이 정책에 대한 남녀의 선호가 같지않다고 할 수 있습니다.\n");
	}else{
		printf("이 정책에 대한 남녀의 선호가 같지않다는 유의미한 통계적 근거가 없습니다.\n");
	}
	
}
