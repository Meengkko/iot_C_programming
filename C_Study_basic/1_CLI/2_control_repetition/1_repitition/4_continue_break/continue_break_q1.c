#include <stdio.h>

void main(){
	int current;
	int times;

	for(current=2;current<10;current++){
		if(current%2==0){
		printf("\n== %d단을 %d번째까지 ==\n\n",current,current);
			for(times=1;times<10;times++){
				printf("    %d x %d = %d\n",current,times,current*times);
				if(times == current){
					break;
				}
			}
		}
	}
}
