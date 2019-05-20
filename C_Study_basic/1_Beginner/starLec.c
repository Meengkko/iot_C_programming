#include <stdio.h>

void main(){

	int length;
	int height;
	int index;
	int jndex;

	scanf("%d %d",&length, &height);

	for(index=0 ; index < height ; index++){
		for(jndex=0 ; jndex < length ; jndex++){
			printf("*");
		}
		if(index != height-1){
			printf("\n");
		}
	}
}
