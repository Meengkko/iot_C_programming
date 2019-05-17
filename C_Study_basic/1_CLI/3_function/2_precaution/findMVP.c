#include <stdio.h>
#pragma warning (disable:4996)

int finalScore(void);
int max_score(int num1,int num2,int num3,int num4,int num5);
int max_number(int num1,int num2,int num3,int num4,int num5);
int compareTwo(int score1, int score2);
char compareTeam(int scoreA, int scoreB);

void main(){
	int i;
	int a[5];
	int b[5];
	int maxScoreA;
	int maxScoreB;
	char winnerTeam;
			
	for(i=0;i<5;i++){
		a[i]=finalScore();
	}
	for(i=0;i<5;i++){
		b[i]=finalScore();
	}

	maxScoreA = max_score(a[0],a[1],a[2],a[3],a[4]);

	maxScoreB = max_score(b[0],b[1],b[2],b[3],b[4]);

	winnerTeam = compareTeam(maxScoreA, maxScoreB);

	printf("%c",winnerTeam);

	if(maxScoreA>maxScoreB){
		printf("%d",max_number(a[0],a[1],a[2],a[3],a[4]));
	}else
		printf("%d",max_number(b[0],b[1],b[2],b[3],b[4]));
}

int finalScore(void){

	int K, D, A;

	scanf("%d/%d/%d",&K,&D,&A);

	return (K*2+A*1)/D;
}

int max_score(int num1,int num2,int num3,int num4,int num5){

	int result;

	result = compareTwo(compareTwo(compareTwo(num1,num2),num3),compareTwo(num4,num5));

	return result;
}

int max_number(int num1,int num2,int num3,int num4,int num5){
	if(max_score(num1,num2,num3,num4,num5) == num1){
		return 1;
	}else if(max_score(num1,num2,num3,num4,num5) == num2){
		return 2;
	}else if(max_score(num1,num2,num3,num4,num5) == num3){
		return 3;
	}else if(max_score(num1,num2,num3,num4,num5) == num4){
		return 4;
	}else{
		return 5;
	}
}

int compareTwo(int score1, int score2){

	if(score1>score2){
		return score1;	
	}else{
		return score2;
	}
}

char compareTeam(int scoreA, int scoreB){
	if(scoreA>scoreB){
		return 'a';
	}else{
		return 'b';
	}
}
