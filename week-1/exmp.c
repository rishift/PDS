// compute the value of x^4 where x is a float input by the user 
// you should not use any other variable

#include <stdio.h>

int main () {
	float x;
	printf("Enter the value of x: ");
	scanf("%f", &x);
	x *= x; 
	x *= x;		// this uses only 2 multiplication operations (rather than x*x*x*x)
	printf("The value of x^4 is %f\n", x);
	return 0;
}
