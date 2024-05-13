#include <stdio.h>

int main() {
	float x, temp;

	printf("Enter x: ");
	scanf("%f", &x);

	temp = 1/x;
	printf("Values of the expressions: %0.3f, ", temp);

	temp = x + temp;
	printf("%0.3f, ", temp);

	temp = x + 1/temp;
	printf("%0.3f, ", temp);

	temp = x + 1/temp;
	printf("%0.3f.\n", temp);

	return 0;
}
