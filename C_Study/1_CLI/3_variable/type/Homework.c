/*  Visual Studio C �����Ϸ����� �����ϴ� C ǥ��Ÿ�Կ� ���Ͽ� ���
 *   ������(Integral Type)�� Ÿ���� ��� ���տ� ���� �ִ밪 ���
 * 
 * d   : ��ȣ�� �ִ� 10���� ����(char, short, int �迭)
 * ld  : long
 * lld : long long
 * u   : ��ȣ ���� 10���� ���� (unsigned int, unsigned short, unsigned char)
 * f   : float, double
 * Lf  : long double
*/

#include <stdio.h>

void main(){
	char signed_char_max = 127;
   	short signed_short_max = 32767;
	int signed_int_max = 2147483647;
	long signed_long_max = 2147483647;
	long long signed_long_long_max = 9223372036854775807;

	unsigned char unsigned_char_max = 255;
   	unsigned short unsigned_short_max = 65535;
	unsigned int unsigned_int_max = 4294967295;
	unsigned long unsigned_long_max = 4294967295;
	unsigned long long unsigned_long_long_max = 18446744073709551615;
	
	printf("���� �̸�\t\t�� �� Ʈ\t���� ����(����)\n");
	printf("char\t\t\t1\t\t-128~127\n");
	printf("unsigned char\t\t1\t\t0~255\n");
	printf("short\t\t\t2\t\t-32,768~32,767\n");
	printf("unsigned short\t\t2\t\t0~65,535\n");
	printf("int\t\t\t4\t\t-2,147,483,648~2,147,483,647\n");
	printf("unsigned int\t\t4\t\t0~4,294,967,295\n");
	printf("long\t\t\t4\t\t-2,147,483,648 ~ 2,147,483,647\n");
	printf("unsigned long\t\t4\t\t0~4,294,967,295\n");
	printf("long long\t\t8\t\t-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807\n");
	printf("unsigned long long\t8\t\t0 ~ 18,446,744,073,709,551,615\n\n");

	printf("float\t\t\t4\n");
	printf("double\t\t\t8\n");
	printf("long double\t\t8\n\n");

	printf("============�� ������ Ÿ���� �ִ�=============\n");
	printf("Max of signed char    : %d\n",signed_char_max);
	printf("Max of signed short   : %d\n",signed_short_max);
	printf("Max of signed int     : %d\n",signed_int_max);
	printf("Max of signed long    : %ld\n",signed_long_max);
	printf("Max of signed longlong: %lld\n\n",signed_long_long_max);
	printf("Max of unsigned char     : %u\n",unsigned_char_max);
	printf("Max of unsigned short    : %u\n",unsigned_short_max);
	printf("Max of unsigned int      : %u\n",unsigned_int_max);
	printf("Max of unsigned long     : %lu\n",unsigned_long_max);
	printf("Max of unsigned longlong : %llu\n\n",unsigned_long_long_max);
}
