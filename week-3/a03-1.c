#include <stdio.h>
#include <math.h>

int main() {
	int n;

	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 2; i < n + 1; i++) 
		printf("%0.3lf ", atan(i) - atan(i-1));

	printf("\n");

	return 0;
}
