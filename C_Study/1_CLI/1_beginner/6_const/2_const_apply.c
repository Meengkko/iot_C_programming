#include <stdio.h>

void main(){
	unsigned long long my_password=12345678987654321;
	unsigned long long input_password=0;

	printf("password�� �Է��ϼ���. (19�ڸ� �̳�): ");
	scanf("%lld",&input_password);

//	if(12345678987654321 == input_password){
	if(my_password == input_password){
		printf("Password�� ��ġ�մϴ�. ���� �����մϴ�.\n");
		printf("���� ����Ǿ� �ִ� Password�� %lld�Դϴ�.\n",my_password);
	}else{
		printf("Password�� ����ġ�մϴ�. ���ư�����.\n");
	}
}
