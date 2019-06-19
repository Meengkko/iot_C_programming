#define SQUARE(X) X*X
#define PI 3.14

int main(){
	int result;
	double d_result;
	int num = 20;

	d_result = PI;
	result = SQUARE(num);
	result = SQUARE(-5);
	result = SQUARE(2.5);
	result = SQUARE(PI);
}
