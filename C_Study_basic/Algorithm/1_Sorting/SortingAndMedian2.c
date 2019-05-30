#include <stdio.h>
#define N 10
// ������, ������, �պ�����, ������, ������� & �������
void SelectionSort(int *Array){
	int i,j;
	int temp;
	for(i=0; i<N-1;i++){
		for(j=i+1;j<N;j++){
			if(*(Array+j)<*(Array+i)){
				temp = *(Array+j);
				*(Array+j) = *(Array+i);
				*(Array+i) = temp;
			}	
		}
	}
}

void BubbleSort(int *Array){
	int i,j;
	int temp;
	for(i=1; i<N; i++){
		for(j=0; j<i; j++){
			if(*(Array + j) > *(Array + j + 1)){
				temp = *(Array+j);
				*(Array+j) = *(Array+i);
				*(Array+i) = temp;
			}
		}
	}
}

void InsertionSort(int *Array){
	int i, j;
	int temp;
	for(i=1; i<N; i++){
		temp = *(Array+i);
		j = i;
		while(*(Array+(j-1)) > temp){
			*(Array+j) = *(Array+(j-1));
			j = j-1;
		}
		*(Array+j) = temp;
	}
}

int main(){
	
	int Element[N];
	int idx = 0;

	while(idx<N){
		printf("��跮�� �Է����ּ��� :");
		scanf("%d",&Element[idx]);
		idx = idx + 1;
	}
	
	//SelectionSort(Element);
	//BubbleSort(Element);
	InsertionSort(Element);
	
	//ShellSort�� �ȵ��ư��� pass...
	
	printf("\n");
	
	for(idx=0; idx<N; idx++){
		printf("%d ",*(Element+idx));
	}
	if(N%2==0){
		printf("\n�߰���: %.2lf",(double)(Element[N/2]+Element[(N/2)+1])/2);
	}else{
		printf("\n�߰���: %.2lf",(double)(Element[(N/2)]));
	}
	
	return 0;	
}
