#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10000
#define TRUE 1
#define FALSE 0

void swap(int List[], int index_i, int index_j){ // swap ith record and jth record
	int temp;

	temp = List[index_i];
	List[index_i] = List[index_j];
	List[index_j] = temp;
}

void CheckSort(int List[], int Size_n){
	int index_i;
    int sorted;
	
	sorted = TRUE;
	for(index_i=1;index_i<Size_n;index_i++){
		if(List[index_i] > List[index_i+1]){
			sorted = FALSE;
			break;
		}
	if(sorted){
		printf("Sorting accomplished!\n");
	}else
		printf("Sorting Error!\n");
	}
}

void SelectionSort(int List[], int Size_n){ // Sorting algorithm
	int index_i;
	int index_j;
	int minimum;

	for(index_i = 1; index_i < Size_n; index_i++){
		minimum = index_i;
		for(index_j = index_i+1; index_j <= Size_n; index_j){
			if(List[index_j] < List[minimum]){
				minimum = index_j;
			}
		swap(List,minimum,index_i);
		} 
	}
}

void main(void){
	int index_i;
	int List[N+1];
	double start_time;

	srand(time(NULL));
	for(index_i=1;index_i<=N;index_i++){
		List[index_i]=rand();
	}
	start_time=clock();
	SelectionSort(List,N);
	printf("선택 정렬의 실행 시간(N=%d) : %.0f\n", N, clock()-start_time);
	CheckSort(List, N);
}
