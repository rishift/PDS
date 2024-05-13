#include <stdio.h>

int main() {
	float x;
	printf("Enter x: ");
	scanf("%f", &x);

	printf("x-7*3/5 = %f\n", x-7*3/5);
	printf("x-7/5*3 = %f\n", x-7/5*3);

	printf("\nCorrect values:\n");
	printf("x-7*3/5 = %f\n", x-7*3/5.0);
	printf("x-7/5*3 = %f\n", x-7/5.0*3);
	
	return 0;
}
