#include <stdio.h>

int main() {
	int m, n;
	int a[10][10];

	printf("Enter #rows & #columns: ");
	scanf("%d%d", &m, &n);

	printf("Enter elements:\n");

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	printf("Hour-glass min: ");

	int t, flag, gf = 1;

	for (int i = 1; i < m - 1; i++) {
		for (int j = 1; j < n - 1; j++) {
			t = a[i][j];
			flag = 1;

			for (int k = -1; k < 2; k++)
				if (t >= a[i - 1][j + k] || t >= a[i + 1][j + k]) {
					flag = 0;
					break;
				}
		
			if (flag) { 
				printf("%d ", t); 
				gf = 0;
			}
		}
	}

	if (gf) printf("None");
	printf("\n");

	return 0;
}
