#include <stdio.h>

void main(){
	printf("이 름	전공학과	학 년\n");
	printf("%s	%s	%s\n\n","이 름","전공학과","학 년");

	//%[- 또는 생략][전체크기][포멧스트링]
	// -는 왼쪽 정렬, 생략하면 오른쪽 정렬
	// 전체크기: 매칭되는 값이 차지하는 byte공간
	// 포멧스트링: c,d,ll,f,lf ..
	printf("===========왼쪽 정렬============\n\n");
	printf("%-8s %-14s %-7s \n","이  름","전공학과","학 년");
	printf("%-8s %-14s %-7d \n","조문수","컴퓨터공학",3);
	printf("%-8s %-14s %-7d \n","김혜경","전자공학",1);
	printf("%-8s %-14s %-7d \n\n","한상우","심리학과",4);
	
	// 11~14 line 전체 왼쪽 정렬
	printf("==========오른쪽 정렬===========\n\n");
	printf("%8s %14s %7s \n","이  름","전공학과","학 년");
	printf("%8s %14s %7d \n","조문수","컴퓨터공학",3);
	printf("%8s %14s %7d \n","김혜경","전자공학",1);
	printf("%8s %14s %7d \n\n","한상우","심리학과",4);
	
	// 11~14 line 전체 오른쪽 정렬
	
	printf("===========중앙 정렬============\n\n");
	printf("%8s %14s %7s \n","이  름 ","전공학과   ","학 년 ");
	printf("%8s %14s %7s \n","조문수 ","컴퓨터공학  ","3   ");
	printf("%8s %14s %7s \n","김혜경 ","전자공학   ","1   ");
	printf("%8s %14s %7s \n\n","한상우 ","심리학과   ","4   ");
	// 11~14 line 전체 중앙 정렬
}
