#include <stdio.h>

int main() {
	double x, x2 ,z;

	printf("Enter x: ");
	scanf("%lf", &x);

	x2 = x * x;
	z = 1 + x2 + x2*x2;

	printf("1+x(1+x(1+x(1+x(1+x(1+x))))) = %0.4lf\n", 1 + (x + x2) * z);
	printf("1-x(1-x(1-x(1-x(1-x(1-x))))) = %0.4lf\n", 1 - (x - x2) * z);
	printf("#multiplications = 4.\n");

	return 0;
}
