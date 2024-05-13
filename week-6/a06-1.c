#include <stdio.h>

#define SIZE 20

int checkUpper(int X[][SIZE], int n) {
	for (int i = 1; i < n; ++i)
		for (int j = 0; i > j; j++) 
			if (X[i][j]) 
				return 0;
	return 1;
}

int main() {
	int A[SIZE][SIZE];
	int n;

	printf("Enter n: ");
	scanf("%d", &n);

	printf("Enter the %dx%d matrix: \n", n, n);
	for(int i = 0; i < n; ++i) 
		for (int j = 0; j < n; ++j) 
			scanf("%d", &A[i][j]);

	printf(
		"The matrix entered is %supper triangular. \n", 
		checkUpper(A, n) ? "" : "not "
	);

	return 0;
}
