#include <stdio.h>

int main() {
	int n;
	float s = 0;
	int nu = 0, de = 1;
	float sign = 1;
	int a, b, t;

	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 2; i < n + 2; i++) {
		s += sign / i;
		nu = nu * i + sign * de;
		de *= i;
		sign *= -1;
	}

	a = de, b = nu;
	while (b) {
		t = a;
		a = b;
		b = t % b;			
	}

	printf("Sum = %0.3f = %d/%d\n", s, nu/a, de/a);

	return 0;
}
