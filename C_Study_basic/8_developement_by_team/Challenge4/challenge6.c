#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#define EOG -2
#pragma warning (disable:4996)

typedef short MENU;

typedef struct {
	char card_name[20];
	char card_number[20];
} CARD;

void insert_data(void);
void delete_data(char*);
//void search_data(char*);
void print_all_data(void);

void main() {

	system("chcp 949");

	MENU db_menu;

	do {
		fputs("***** MENU *****\n", stdout);
		fputs("1. Insert\n", stdout);
		fputs("2. Delete\n", stdout);
		fputs("3. Search\n", stdout);
		fputs("4. Print All\n", stdout);
		fputs("5. exit\n", stdout);
		fputs("Choose the item: ", stdout);
		scanf("%hd", &db_menu);

		getchar();

		switch (db_menu) {
		case 1:
			insert_data();
			break;
		case 2:
		//	name_str = (char*)malloc(20);
			fputs("Input Name: ", stdout);
			gets(name_str);
			delete_data(name_str);
			free(name_str);
			break;
		case 3:
		/*	name_str = (char*)malloc(20);
			fputs("Input Name: ", stdout);
			fgets(name_str, strlen(name_str), stdin);
			search_data(name_str);
			free(name_str); */
			break;
		case 4:
			print_all_data();
			break;
		case 5:
			db_menu = EOG;
			break;
		}

		system("cls");

	} while (db_menu != EOG);
}

void insert_data(void) {

	FILE* fp = fopen("numberCard.txt", "at");
	char* namestr = (char *)malloc(20);
	char* numberstr = (char *)malloc(30);

	fputs("Input Name: ", stdout);
	gets(namestr);
	namestr[strlen(namestr) - 1] = ' ';
	
	fputs("Input Tel Number: ", stdout);
	gets(numberstr);
	
	fputs(namestr, fp);
	fputs(numberstr, fp);
	fputc('\n', fp);
	
	puts("Data Inserted");
	getch();

	free(namestr);
	free(numberstr);

	fclose(fp);
}

void delete_data(char* ptrname) {

	FILE* fp1 = fopen("numberCard.txt", "rt");
	FILE* fp2 = fopen("temp.txt", "wt");
	char* strfinder = (char *)malloc(30);
	char CharFPut;
	unsigned int file_pos_before;
	unsigned int file_pos_after;

	do {
		CharFPut = fgetc(fp1);
		fputc(CharFPut, fp2);
	} while (CharFPut != EOF);

	fclose(fp2);
	fp2 = fopen("temp.txt", "rt");

	fseek(fp1, 0, SEEK_SET);

	do {
		fscanf(fp1, "%s", strfinder);
	} while (strcmp(ptrname, strfinder));

	free(strfinder);

	fseek(fp1, -((int)strlen(ptrname)), SEEK_CUR);
	file_pos_before = ftell(fp1);
	file_pos_after = file_pos_before;
	while ((CharFPut = fgetc(fp1)) != '\n') {
		file_pos_after++;
	}

	fclose(fp1);
	fp1 = fopen("numberCard.txt", "wt");
	while(ftell(fp1) < file_pos_before-1) {
		CharFPut = fgetc(fp2);
		fputc(CharFPut, fp1);
	}

	fclose(fp1);
	fp1 = fopen("numberCard.txt", "at");
	
	fseek(fp2, file_pos_after+2 , SEEK_SET);

	do {
		CharFPut = fgetc(fp2);
		fputc(CharFPut, fp1);
	} while (CharFPut != EOF);

	fclose(fp1);
	fclose(fp2);

	remove("temp.txt");
}

//void search_data(char* ptrname);
void print_all_data(void) {
	FILE* fp = fopen("numberCard.txt", "rt");
	char printChar;

	while ((printChar = fgetc(fp)) != EOF) {
		printf("%c", printChar);
	}
	getch();
	fclose(fp);
}