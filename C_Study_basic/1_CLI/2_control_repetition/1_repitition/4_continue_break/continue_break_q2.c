#include <stdio.h>

void main(){
	int variable_a;
	int variable_z;
	
	printf("\n  **(A, Z) ������ ���ϱ�**\n\n �Ʒ��� ���õǴ� �����ֵ���\n\n\t  A Z\n\t+ Z A �� �����մϴ�.\n\t-----\n\t  9 9\n\n====>");

	for(variable_a=1;variable_a<10;variable_a++){
		for(variable_z=1;variable_z<10;variable_z++){
			if(variable_a+variable_z == 9){
				printf("\t(%d, %d)\n", variable_a,variable_z);
				// continue;
				// break;	
			}
		}	
	}
}
