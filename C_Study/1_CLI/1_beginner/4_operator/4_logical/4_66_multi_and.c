#include <stdio.h>
/* �� AND ����ǥ
 * A����	B����	C����	���
 * ����		����	����	����
 * ��		����	����	����
 * ��		��		����	����
 * ��		����	��		����
 * ����		��		����	����
 * ����		����	��		����
 * ����		��		��		����
 * ��		��		��		��
*/

void main(){
	int num1=10;
	int num2=12;
	int num3=19;

	int result;

	printf("num1: %d, num2: %d\n\n",num1,num2);
	// ���� && ���� && ����
	result = (num1 != 10 && num2 != 12 && num3 != 19);
	printf("(num1 != 10 && num2 != 12 && num3 != 19) => �򰡰��: %d\n",result);
	// �� && ���� && ����
	result = (num1 == 10 && num2 != 12 && num3 != 19);
	printf("(num1 == 10 && num2 != 12 && num3 != 19) => �򰡰��: %d\n",result);
	// �� && �� && ����
	result = (num1 == 10 && num2 == 12 && num3 != 19);
	printf("(num1 == 10 && num2 == 12 && num3 != 19) => �򰡰��: %d\n",result);
	// �� && ���� && ��
	result = (num1 == 10 && num2 != 12 && num3 == 19);
	printf("(num1 == 10 && num2 != 12 && num3 == 19) => �򰡰��: %d\n",result);
	// ���� && �� && ����
	result = (num1 != 10 && num2 == 12 && num3 != 19);
	printf("(num1 != 10 && num2 == 12 && num3 != 19) => �򰡰��: %d\n",result);
	// ���� && ���� && ��
	result = (num1 != 10 && num2 != 12 && num3 == 19);
	printf("(num1 != 10 && num2 != 12 && num3 == 19) => �򰡰��: %d\n",result);
	// ���� && �� && ��
	result = (num1 != 10 && num2 == 12 && num3 == 19);
	printf("(num1 != 10 && num2 == 12 && num3 == 19) => �򰡰��: %d\n",result);
	// �� && �� && ��
	result = (num1 == 10 && num2 == 12 && num3 == 19);
	printf("(num1 == 10 && num2 == 12 && num3 == 19) => �򰡰��: %d\n",result);
}
