#include <stdio.h>

void main(){
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);

	// else�� ���� if �Ǵ� else if���� �ٷ��� �ʾҴ� ��� ������ �����Ѵ�.
	// ��, default�� ������ ������ �ִ�.
/*
	if(num>0){
		printf("�Է� ���� 0���� ũ��.\n");
	}else if(num<0){
		printf("�Է� ���� 0���� �۴�.\n");
	}else{
		printf("�Է� ���� 0�̴�.\n");
	}	
}
*/
/*
	if(num<0){
	}else if(num==0){
	}else{ // num>0
	}
*/
/*
	if(num>0){
	}else if(num==0){
	}else{ // num<0
	}
*/
//  else <==> if( num==-7 || num==-6 || num==-5 || num==-2 || num==-1 || num == 1 || num == 2 || num == 10 || num == 11 || num == 12 || num ==13 || num>=1000 ) 
//  �̷����� �Ǽ����� �ʵ��� ��������!!
//
	if(num<-7){
		printf("Type A\n");
	}else if(num > -5 && num < -3){
		printf("Type B\n");
	}else if(num == 0){
		printf("Type C\n");
	}else if(num > 2 && num < 10){
		printf("Type D\n");
	}else if(num > 13 && num < 1000){
		printf("Type E\n");
	}else{
		printf("Default Type Z�� �Ҵ�!\n");
	}
}
