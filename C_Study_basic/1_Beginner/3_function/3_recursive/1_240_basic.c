#include <stdio.h>

void Recursive(int num){
	
	if(num<0){    // Àç±ÍÀÇ Å»Ãâ Á¶°Ç
		return;	  // Àç±ÍÀÇ Å»Ãâ
	}
	
	printf("Recursive call! %d \n", num);
	Recursive(num-1);
}

void main() {	
	Recursive(3);

}
