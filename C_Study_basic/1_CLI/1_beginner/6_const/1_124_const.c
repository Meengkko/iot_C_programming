//#include <stdio.h> <== Standard IO(ex : printf, scanf�� ����� �� ����.)

void main(){
	int military_serial_number=1170007474; // military_serial_number: ����, 1170007474: ���
	int my_birth_day=910726;
	// const�� constant�� �ǹ��Ѵ�.
	const int ci_military_serial_number=1170007474; //ci const int�� �ǹ�
	const int ci_my_birth_day=910726; // ci_my_birth_day: const

	// ���� �ٲ��� �ʰ� ������ �ϰ����ϴ� ������ �����ʹ�
	// ���� �ٲٴ� ���� ��ü�� ������ ����ų �� �ִ�.
	military_serial_number=1175324574;
	my_birth_day=910726;
	my_birth_day++;

	ci_military_serial_number=1175324574;
	ci_my_birth_day=910226;
	ci_my_birth_day++;
}
