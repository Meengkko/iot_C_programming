#include <stdio.h>
/* And ���� ����ǥ
   0 & 0 = 0
   0 & 1 = 0
   1 & 0 = 0
   1 & 1 = 1
 */

void main(){
	int num1 = 15; // 00000000 00000000 00000000 00001111
	int num2 = 20; // 00000000 00000000 00000000 00010100
				   // 00000000 00000000 00000000 00000100
	int num3 = num1 & num2;

	printf("AND ������ ���: %d\n", num3);
}