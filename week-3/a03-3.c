#include <stdio.h>

int main() {
	int a, b;
	int r;

	printf("Enter the fraction: ");
	scanf("%d/%d", &a, &b);

	printf("Continued fraction = [%d", a / b);

	r = a % b;

	if (r) {
		printf("; ");
		while (r != 1) {
			a = b;
			b = r;
			r = a % b;
			if (!r) break;
			printf("%d, ", a / b);
		}
		printf("%d", r ? b : a / b);
	}

	printf("].\n");

	return 0;
}
