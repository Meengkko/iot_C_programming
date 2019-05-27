#include <stdio.h>
#pragma warning (disable:4996)

int CipherFib(int key, int N);

void main() {
	char cipher_key;
	char *pointer;
	char Caesar_Cipher[100];
	int i=0;

	printf("암호키를 입력하세요(1~10000): ");
	scanf("%d", &cipher_key);
	
	pointer = &Caesar_Cipher;

	printf("암호를 만들 문자열을 입력하세요: ");
	scanf("%s", Caesar_Cipher);

	while (*(pointer + i) != '\0') {
		Caesar_Cipher[i] * (pointer + i) = Caesar_Cipher[i] * (pointer + i) + CipherFib(cipher_key, i);
		if (Caesar_Cipher[i] * (pointer + i) > 90) {
			Caesar_Cipher* (pointer + i) = Caesar_Cipher * (pointer + i) - 26;
		}
	}
}

int CipherFib(int key, int N) {
	
	int fibF = 1;
	int fibS = key;
	int temp;
	
	if (N == 0) {
		return fibF;
	}
	else if (N == 1) {
		return fibS % 26;
	}
	else {
		for (int i = 0; i < N; i++) {
			temp = fibS;
			fibS = fibF + fibS;
			fibF = temp;
		}
		return fibS % 26;
	}
}