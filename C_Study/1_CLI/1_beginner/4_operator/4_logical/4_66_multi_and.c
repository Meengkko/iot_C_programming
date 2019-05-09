#include <stdio.h>
/* ³í¸® AND Áø¸®Ç¥
 * AÁ¶°Ç	BÁ¶°Ç	CÁ¶°Ç	°á°ú
 * °ÅÁþ		°ÅÁþ	°ÅÁþ	°ÅÁþ
 * Âü		°ÅÁþ	°ÅÁþ	°ÅÁþ
 * Âü		Âü		°ÅÁþ	°ÅÁþ
 * Âü		°ÅÁþ	Âü		°ÅÁþ
 * °ÅÁþ		Âü		°ÅÁþ	°ÅÁþ
 * °ÅÁþ		°ÅÁþ	Âü		°ÅÁþ
 * °ÅÁþ		Âü		Âü		°ÅÁþ
 * Âü		Âü		Âü		Âü
*/

void main(){
	int num1=10;
	int num2=12;
	int num3=19;

	int result;

	printf("num1: %d, num2: %d\n\n",num1,num2);
	// °ÅÁþ && °ÅÁþ && °ÅÁþ
	result = (num1 != 10 && num2 != 12 && num3 != 19);
	printf("(num1 != 10 && num2 != 12 && num3 != 19) => Æò°¡°á°ú: %d\n",result);
	// Âü && °ÅÁþ && °ÅÁþ
	result = (num1 == 10 && num2 != 12 && num3 != 19);
	printf("(num1 == 10 && num2 != 12 && num3 != 19) => Æò°¡°á°ú: %d\n",result);
	// Âü && Âü && °ÅÁþ
	result = (num1 == 10 && num2 == 12 && num3 != 19);
	printf("(num1 == 10 && num2 == 12 && num3 != 19) => Æò°¡°á°ú: %d\n",result);
	// Âü && °ÅÁþ && Âü
	result = (num1 == 10 && num2 != 12 && num3 == 19);
	printf("(num1 == 10 && num2 != 12 && num3 == 19) => Æò°¡°á°ú: %d\n",result);
	// °ÅÁþ && Âü && °ÅÁþ
	result = (num1 != 10 && num2 == 12 && num3 != 19);
	printf("(num1 != 10 && num2 == 12 && num3 != 19) => Æò°¡°á°ú: %d\n",result);
	// °ÅÁþ && °ÅÁþ && Âü
	result = (num1 != 10 && num2 != 12 && num3 == 19);
	printf("(num1 != 10 && num2 != 12 && num3 == 19) => Æò°¡°á°ú: %d\n",result);
	// °ÅÁþ && Âü && Âü
	result = (num1 != 10 && num2 == 12 && num3 == 19);
	printf("(num1 != 10 && num2 == 12 && num3 == 19) => Æò°¡°á°ú: %d\n",result);
	// Âü && Âü && Âü
	result = (num1 == 10 && num2 == 12 && num3 == 19);
	printf("(num1 == 10 && num2 == 12 && num3 == 19) => Æò°¡°á°ú: %d\n",result);
}
