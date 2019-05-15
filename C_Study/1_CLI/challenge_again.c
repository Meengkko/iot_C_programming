#include <stdio.h>
#include <string.h>

void roofLine(int size, char figure[]){
	int figure_count;
	int character_count;

	for(figure_count=0;figure_count<strlen(figure);figure_count++){
		if((int)figure == '1' || (int)figure == '4'){
			printf(" ");
			for(character_count=0; character_count<size; character_count++){
				printf(" ");
			}
			printf(" ");
		}else{
			printf(" ");
			for(character_count=0; character_count<size; character_count++){
				printf("-");
			}
			printf(" ");

		}
		printf(" ");
	}
}

void verticalUpper(int size, char figure[]){
	int figure_count;
	int character_count;

	for(figure_count=0;figure_count<strlen(figure);figure_count++){
		if((int)figure == '4' || (int)figure == '8' || (int)figure == '9' || (int)figure == '0'){
			for(character_count=0; character_count<size; character_count++){
				if(character_count == 0 || character_count == strlen(figure)){
					printf("|");
				}else{
					printf(" ");
				}
			}
		}else if((int)figure == '1' || (int)figure =='2' || (int)figure =='3' || (int)figure =='7'){
			for(character_count=0; character_count<size; character_count++){
				if(character_count = strlen(figure)){
					printf("|");
				}else{
					printf(" ");
				}
			}
		}else{
			for(character_count=0; character_count<size; character_count++){
				if(character_count = 0){
					printf("|");
				}else{
					printf(" ");
				}
			}
		}
		printf(" ");
	}
}


void middleLine(int size, char figure[]){
	int figure_count;
	int character_count;

	for(figure_count=0;figure_count<strlen(figure);figure_count++){
		if((int)figure == '1' || (int)figure == '7' || (int)figure == '0'){
			printf(" ");
			for(character_count=0; character_count<size; character_count++){
				printf(" ");
			}
			printf(" ");
		}else{
			printf(" ");
			for(character_count=0; character_count<size; character_count++){
				printf("-");
			}
			printf(" ");

		}
		printf(" ");
	}
}


void verticalLower(int size, char figure[]){
	int figure_count;
	int character_count;

	for(figure_count=0;figure_count<strlen(figure);figure_count++){
		if((int)figure == '6' || (int)figure == '8' || (int)figure == '0'){
			for(character_count=0; character_count<size; character_count++){
				if(character_count == 0 || character_count == strlen(figure)){
					printf("|");
				}else{
					printf(" ");
				}
			}
		}else if((int)figure == '1' || (int)figure =='3' || (int)figure =='4' || (int)figure == '5' || (int)figure =='7' || (int)figure == '9'){
			for(character_count=0; character_count<size; character_count++){
				if(character_count = strlen(figure)){
					printf("|");
				}else{
					printf(" ");
				}
			}
		}else{
			for(character_count=0; character_count<size; character_count++){
				if(character_count == 0){
					printf("|");
				}else{
					printf(" ");
				}
			}
		}
		printf(" ");
	}
}

void bottomLine(int size, char figure[]){
	int figure_count;
	int character_count;

	for(figure_count=0;figure_count<strlen(figure);figure_count++){
		if((int)figure == '1' || (int)figure == '4' || (int)figure == '7'){
			printf(" ");
			for(character_count=0; character_count<size; character_count++){
				printf(" ");
			}
			printf(" ");
		}else{
			printf(" ");
			for(character_count=0; character_count<size; character_count++){
				printf("-");
			}
			printf(" ");

		}
		printf(" ");
	}
}



void main(){
	
	int mainCount;
	int mainsize;
	char objectNumber[99];

	scanf("%d %s",&mainsize,objectNumber);

	roofLine(mainsize,objectNumber);

	for(mainCount=0;mainCount<mainsize;mainCount++){
		verticalUpper(mainsize,objectNumber);
	}

	middleLine(mainsize,objectNumber);

	for(mainCount=0;mainCount<mainsize;mainCount++){
		verticalLower(mainsize,objectNumber);
	}

	bottomLine(mainsize,objectNumber);
}

