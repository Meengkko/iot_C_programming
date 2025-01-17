/*
 * 합병정렬 합병을 이용한 정렬알고리즘
 * 두 개의 정렬된 배열이 주어졌을 때, 정렬된 하나의 배열로 합병
 * <1,5,6,8> <2,4,7,9> => <1,2,4,5,6,7,8,9>
 * 이미 정렬되어있는 두 배열의 가장 왼쪽에 있는 숫자들끼리만 비교하여 정렬
 * Divide and conquer approach - 크기가 커서 풀기 어려운 하나의 문제를 
 * 크기가 작아서 풀기 쉬운 여러 개읭 문제로 바꾸어서 푸는 방법
 * Divide n Keys를 두 개의 n/2 Keys로 나눈다.
 * Conquer 합병정렬을 사용하여 두 개의 배열을 정렬한다.
 * Combine 두 개의 정렬된 배열을 하나로 합치는 과정
 * MERGE_SORT(A,p,r)
 *     if p < r
 * 			q = [(p + r)/2]
 * 			MERGE_SORT(A,p,q)
 * 			MERGE_SORT(A,q+1,r)
 * 			MERGE(A,p,q,r)
 *
 *  < 합병 정렬의 수행시간 >
 * 	T(n) = Theta(1)				if n = 1
 * 		   2*T(n/2) + Theta(n)	if n > 1
 *
 *  T(n) = c					if n = 1
 *  	   2*T(n/2) + c*n
 *
 *  Theta(nlogn)
 *
 */

#include <stdio.h>

void mergeSort(int *data, int p, int r);
void merge(int *data, int p, int q, int r);

int main(){
	int data[8] = {2,5,3,7,6,9,10,4}, i;
	printf("정렬 전\n");
	for(i = 0; i < 8; i++){
		printf("%d ", data[i]);
	}
	mergeSort(data, 0, 7);
	printf("\n정렬 후\n");
	for(i = 0; i < 8; i++){
		printf("%d ", data[i]);
	}
}

void mergeSort(int *data, int p, int r){
	int q;
	if(p < r){
		q = (p + r)/2;
		mergeSort(data, p, q);
		mergeSort(data, q + 1, r);
		merge(data, p, q, r);
	}
}

void merge(int *data, int p, int q, int r){
	int i = p, j = q + 1, k = p;
	int tmp[8];
	while(i<q && j<=r){
		if(data[i] <= data[j]){
			tmp[k++] = data[i++];
		}else{
			tmp[k++] = data[j++];
		}
	}
	//while(i<=q){
	//	tmp[k++] = data[i++];
	//}
	//while(j<=r){
	//	tmp[k++] = data[j++];
	//}
	for(int a = p; a<=r; a++){
		*(data+a) = *(tmp+a);
	}
}
