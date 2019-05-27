#include <stdio.h>
#include <math.h>

void main(){
	char * Preference[3] = {"지지", "반대", "총합"};
	char * Sex[3] = {"남성", "여성", "총합"};
	int ContingTable[3][3] = {0};
	int sum=0;
	int i, j;

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
}
