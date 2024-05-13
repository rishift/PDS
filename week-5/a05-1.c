#include <stdio.h>
#define SIZE 1000

int main () {
	char x[SIZE], y[SIZE], z[2 * SIZE];

	printf("Enter an alphanumeric string: ");
	scanf("%s", x);

	int len = 0;
	while (x[len]) len++;

	for (int i = 0; i < len; i++) {
		z[i] = x[i];
		y[i] = x[len - i - 1];
		z[len + i] = y[i]; 
	}
	y[len] = z[2 * len] = '\0';

	printf("Reverse = %s\n", y);
	printf("Palindrome = %s\n", z);

	return 0;
}
