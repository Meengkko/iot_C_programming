#include <stdio.h>

void main(){

	int arr[5] = {1,2,3,4,5};
	int *ptr = &arr[4];

	for(int i=0; i<5; i++){
		*(ptr-i) = *(ptr-i) + 2;
	}
	
	for(int i=0; i<5; i++){
		printf("%d ", arr[i]);
	}
}
