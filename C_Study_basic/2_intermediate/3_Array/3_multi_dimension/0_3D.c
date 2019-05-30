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

	printf("1976~1987 플로리다주 사형선고\n\n");
	printf("피해자\t피고\t사형\t사형X\t비율\n\n");

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
	
	printf("이 자료에서는 모든 인종의 피해사례에서 흑인이 사형선고받는 비율이 더 높을 것으로 보입니다.\n\n");
	_getch();
	printf("그러나 피해자의 인종을 고려하지 않고 피고의 인종만 변수로 두었을때를 놓고 보면 다른 결과를 볼 수 있습니다.\n\n");
	_getch(); 
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			for(k=0; k<2; k++){
				marginalFl[i][j] = marginalFl[i][j] + FloridaCase[k][i][j];
			}
		}
	}
	
	printf("\t피고\t사형\t사형X\t비율\n\n");
	for(i=0; i<2; i++){
		printf("\t%s",*(Verdicted+i));
		for(j=0; j<2; j++){
			printf("\t%4d",marginalFl[i][j]);
		}
		printf("\t%4.2lf",(double)marginalFl[i][0]/marginalFl[i][1]*100);
		printf("\n\n");
	}
	printf("이처럼 주변 연관성이 조건부 연관성과 다른 방향을 가질 수도 있음을 알 수 있으며\n\n");
	_getch(); 
	printf("이것을 Simpson의 역설이라고 합니다.");
}
