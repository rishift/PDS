#include <stdio.h>

float f(float a, float b, float c, float x){
	return a*x*x + b*x + c;
}

int main(){
	float a, b, c, x;

	printf("Enter a, b, c, x: ");
	scanf("%f%f%f%f", &a, &b, &c, &x);

	printf("f = %f\n", f(a, b, c, x));

	return 0;
}
