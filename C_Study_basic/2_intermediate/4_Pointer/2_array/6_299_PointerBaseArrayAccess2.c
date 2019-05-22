#include <stdio.h>

void main(){
	int arr[3]={11,22,33};
	int * ptr = arr; 
	//int * ptr = &arr[0]; 과 같은 문장
	printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));
	printf("%d %d %d \n", ptr[0], ptr[1], ptr[2]);
	
	printf("%d %d %d \n", *arr, *(arr+1), *(arr+2));
	printf("%d %d %d \n", arr[0], arr[1], arr[2]);
	// arr[i] == *(arr+i)
}
