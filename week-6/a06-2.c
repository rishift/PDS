#include <stdio.h>

#define SIZE 100

int FindDiff(int *X, int n, int *x1, int *x2) {
	int diff;
	int minDiff = 999999;
	int a1, a2;

	for (int i = 0; i < n - 1; ++i)
		for (int j = i + 1; j < n; ++j) {
			diff = X[i] - X[j];
			if (diff < 0) diff = -diff;
			if (diff < minDiff) {
				minDiff = diff;
				*x1 = X[i];
				*x2 = X[j];
			}
		}
	return minDiff;
}

int main() {
	int A[SIZE];
	int n;
	
	printf("Enter n: ");
	scanf("%d", &n);

	printf("Enter the elements: ");
	for (int i = 0; i < n; ++i) scanf("%d", &A[i]);

	int a1, a2,
	min = FindDiff(A, n, &a1, &a2);

	printf(
		"The minimun absolute difference is %d and the corresponding numbers are %d and %d. \n",
		min, a1, a2
	);

	return 0;
}
