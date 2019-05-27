#include <stdio.h>
#pragma warning (disable:4996)

int Factorial(int Integer);
int PlusMinus(int num);
long double PowerOfReal(long double base, int exponent);
long double SinXFunc(long double rad, int iter);
long double CosXFunc(long double rad, int iter);

void main(){

	char Trigonometric[4];
	long double Radian;
	int iteration;

	printf("계산종류(sin,cos,tan): ");
	scanf("%s",Trigonometric);

	printf("각도(라디안으로)): ");
	scanf("%lf",&Radian);

	printf("반복횟수: ");
	scanf("%d",&iteration);
	

	if(Trigonometric[0] == 's' || Trigonometric[0] == 'S'){
		printf("%lf",SinXFunc(Radian, iteration));
	}else if(Trigonometric[0] == 'c' || Trigonometric[0] == 'C'){
		printf("%lf",CosXFunc(Radian, iteration));
	}else if(Trigonometric[0] == 't' || Trigonometric[0] == 'T'){
		printf("%lf",SinXFunc(Radian,iteration)/CosXFunc(Radian, iteration));
	}else{
		printf("Input Error");
	}
}

int Factorial(int integer){
	int factorial=1;

	if(integer == 0){
		return 1;
	}
	while(integer>0){
		factorial = factorial * integer;
		integer = integer - 1;
	}
	return factorial;
}

int PlusMinus(int num) {
	if (num % 2 == 0) {
		return 1;
	}else {
		return (-1);
	}
}

long double PowerOfReal(long double base, int exponent){
	
	long double powerofreal = base;
	if(exponent	== 0){
		return 1;
	}
	while(exponent>1){
		powerofreal = powerofreal * base;
		exponent = exponent - 1;
	}
	return powerofreal;
}

long double SinXFunc(long double rad, int iter){
	
	long double SinX=0;

	for(int n=0; n <= iter; n++){
		printf("%lf\n", PlusMinus(n) * PowerOfReal(rad, (2 * n) + 1) / (long double)Factorial((2 * n) + 1));
		SinX = SinX + PlusMinus(n)*(PowerOfReal(rad,(2*n)+1)/(long double)Factorial((2*n)+1));
	}
	return SinX;
}


long double CosXFunc(long double rad, int iter){
	
	long double CosX=0;

	for(int n=0; n <= iter; n++){
		printf("%lf\n", PlusMinus(n)* PowerOfReal(rad, (2 * n)) / (long double)Factorial((2 * n)));
		CosX = CosX + PlusMinus(n)*PowerOfReal(rad,(2*n))/(long double)Factorial(2*n);
	}
	return CosX;
}
