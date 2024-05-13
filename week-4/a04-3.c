#include <stdio.h>
#define SIZE 100

void takeInput(int a[], int n) {

	printf("Enter non-negative and distinct elements: \n");

	int t, flag;

	for (int i = 0; i < n; i++) {
		printf(" %d: ", i);
		scanf("%d", &t);

		if (t < 0) {
			printf("It's negative; please enter again.\n");
			i--;
			continue;
		}

		flag = 0;		

		for (int j = 0; j < i; j++) {
			if (a[j] == t) {
				printf("It's a duplicate; please enter again.\n");
				i--;
				flag = 1;
			}
		}
		if (flag) continue;

		a[i] = t;
	}
}

void printArray(int a[], int n, char arrayName) {

	printf("%c[] =", arrayName);

	for (int i = 0; i < n; i++) 
		printf("%3d", a[i]);
	
	printf("\n");
}

void findRanks(int a[], int b[], int n) { 
	
	int r;
	
	for (int i = 0; i < n; i++) {
		r = 1;
		
		for (int j = 0; j < n; j++)
			if (a[j] > a[i])
				r++;

		b[i] = r;
	}
}

int main() {
	int a[SIZE], b[SIZE], n;

	printf("Enter #elements: ");
	scanf("%d", &n);

	takeInput(a, n);
	printArray(a, n, 'a');

	findRanks(a, b, n);
	printArray(b, n, 'b');

	return 0;
}
