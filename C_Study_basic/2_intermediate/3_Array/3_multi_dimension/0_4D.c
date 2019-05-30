#include <stdio.h>

int main(){
	
	char *fourDArray[2][2][2][2] = {
		{
			{
				{"ESTJ(사업가형)","ESTP(수완좋은 활동가형)"},
				{"ESFJ(친선도모형)","ESFP(사교적인유형)"}
			},
			{
				{"ENTJ(지도자형)","ENTP(발명가형)"},
				{"ENFJ(언변능숙형)","ENFP(스파크형)"}
			}
		},
		{
			{
				{"ISTJ(세상의 소금형)","ISTP(백과사전형)"},
				{"ISFJ(임금 뒷편의 권력형)","ISFP(성인군자형)"}
			},
			{
				{"INTJ(과학자형)","INTP(아이디어 뱅크형)"},
				{"INFJ(예언자형)","INFP(잔다르크형)"}

			}
		}
	
	};
	int i,j,k,l;

	printf("나는 에너지를 (1.외향적으로쓴다, 2.내향적으로쓴다).");
	scanf("%d",&i);
	printf("\n나는 사물을(1.감각적으로, 2.직관적으로)인식한다.");
	scanf("%d",&j);
	printf("\n나는 판단을 주로 (1.사고에, 2.감정에)맡긴다.");
	scanf("%d",&k);
	printf("\n나의 생활양식은 (1.판단에 근거한다, 2.인식에 근거한다).");
	scanf("%d",&l);

	printf("\n\n당신은 %s 형입니다.",fourDArray[i-1][j-1][k-1][l-1]);
	
	return 0;
}
	
