#include <stdio.h>

void main(){

	int numberShrimp=1;
	int maxShrimp=0;
	int numberCream=1;
	int maxCream=0;
	int numberCoke=1;
	int maxCoke=0;
	int budget=0;

	printf("���� ����� �����ϰ� �ִ� �ݾ�: ");
	scanf("%d",&budget);

	maxShrimp = budget / 700;
	maxCream = budget / 500;
	maxCoke = budget / 400;

	for(numberShrimp=1;numberShrimp<=maxShrimp;numberShrimp++){
		for(numberCream=1;numberCream<=maxCream;numberCream++){
			for(numberCoke=1;numberCoke<=maxCoke;numberCoke++){
				if((700*numberShrimp)+(500*numberCream)+(400*numberCoke) == budget){
					printf("ũ����:%d �����:%d �ݶ�:%d\n",numberCream,numberShrimp,numberCoke);
				}
			}
		}
	}
}
