#include <stdio.h>
#include <stdlib.h>


typedef struct {
	int numerator;
	int denominator;
} rational;


void bubbleSort(rational a[], int n) {
	rational r1, r2;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n - i + 1; ++j) {
			r1 = a[j];
			r2 = a[j + 1];

			if (r1.numerator * r2.denominator > r2.numerator * r1.denominator) {
				a[j] = r2;
				a[j + 1] = r1;
			}
		}
}


int main() {

	int n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	rational *nums = (rational *)malloc(n * sizeof(rational));

	if (nums == NULL) {
		printf("Insufficient memory during malloc, program terminated...\n");
		exit(0);
	}

	printf("Enter the elements: ");
	for (int i = 0; i < n; ++i) {
		scanf("%d/%d", &nums[i].numerator, &nums[i].denominator);
	}

	bubbleSort(nums, n);
	
	printf("Sorted elements: ");
	for (int i = 0; i < n; ++i) {
		printf("%d/%d ", nums[i].numerator, nums[i].denominator);
	}

	printf("\n");
	return 0;
}
