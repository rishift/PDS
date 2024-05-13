#include <stdio.h>

int sumCombs(int n) {
	if (n == 1) return 1;
	if (n == 2) return 2;

	return sumCombs(n - 1) + sumCombs(n - 2);
}


int main() {
	int n;

	printf("Enter n: ");
	scanf("%d", &n);

	printf("#ways = %d\n", sumCombs(n));
	
	return 0;
}
