//#include <stdio.h> <== Standard IO(ex : printf, scanf를 사용할 때 쓴다.)

void main(){
	int military_serial_number=1170007474; // military_serial_number: 변수, 1170007474: 상수
	int my_birth_day=910726;
	// const는 constant를 의미한다.
	const int ci_military_serial_number=1170007474; //ci const int를 의미
	const int ci_my_birth_day=910726; // ci_my_birth_day: const

	// 값이 바뀌지 않고 참조만 하고자하는 성격의 데이터는
	// 값을 바꾸는 행위 자체가 문제를 일으킬 수 있다.
	military_serial_number=1175324574;
	my_birth_day=910726;
	my_birth_day++;

	ci_military_serial_number=1175324574;
	ci_my_birth_day=910226;
	ci_my_birth_day++;
}
