#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void main() {

	char CrossWord[50][50];
	char widthStr[50];
	char lengthStr[50];
	int crossIdx[2];
	int widthIndex = 0;
	int lengthIndex = 0;
	int widthPrinter = 0;
	int lengthPrinter = 0;
	
	scanf("%s %s", widthStr, lengthStr);

	for (; widthIndex < strlen(widthStr); widthIndex++) {
		for (lengthIndex = 0; lengthIndex < strlen(lengthStr); lengthIndex++) {
			if (widthStr[widthIndex] == lengthStr[lengthIndex]) {
				crossIdx[0] = widthIndex;
				crossIdx[1] = lengthIndex;
				break;
			}
		}
		if (widthStr[widthIndex] == lengthStr[lengthIndex]) {
			break;
		}
	}

	if (widthIndex == strlen(widthStr) && lengthIndex == strlen(lengthStr)) {
		printf("None\n");
		return;
	}


	for (widthIndex=0; widthIndex < strlen(lengthStr); widthIndex++) {
		for (lengthIndex=0; lengthIndex < strlen(widthStr); lengthIndex++) {
			if(widthIndex == crossIdx[1] && lengthIndex == crossIdx[0]){
				CrossWord[widthIndex][lengthIndex] = widthStr[widthPrinter];
				widthPrinter++;
				lengthPrinter++;
			}else if (widthIndex == crossIdx[1]) {
				CrossWord[widthIndex][lengthIndex] = widthStr[widthPrinter];
				widthPrinter++;
			}else if (lengthIndex == crossIdx[0]) {
				CrossWord[widthIndex][lengthIndex] = lengthStr[lengthPrinter];
				lengthPrinter++;
			}else {
				CrossWord[widthIndex][lengthIndex] = '.';
			}
		}
	}
	for (widthIndex = 0; widthIndex < strlen(lengthStr); widthIndex++) {
		for (lengthIndex = 0; lengthIndex < strlen(widthStr); lengthIndex++) {
			printf("%c\t", CrossWord[widthIndex][lengthIndex]);
		}
		putchar('\n');
	}
}