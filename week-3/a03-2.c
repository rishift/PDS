#include <stdio.h>
#include <math.h>

int main() {
	int n;

	printf("Enter n: ");
	scanf("%d", &n);

	printf("Prime divisors: ");
	
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			int isPrime = 1;
			int lim = (int)sqrt(i) + 1;

			for (int j = 2; j < lim; j++) {
				if (i % j == 0) {
					isPrime = 0;
					break;
				}
			}
			if (isPrime) printf("%d, ", i);
		}
	}
	
	printf("\n");

	return 0;
}
