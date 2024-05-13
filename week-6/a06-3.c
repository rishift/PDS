#include <stdio.h>

#define SIZE 100

int CountChar(char C[], char *mc) {
	int len = 0; 
	while (C[++len]);
	
	char prev = *mc = C[0];
	int count, maxCount = 1;

	for (int i = 1; i < len; ++i) {
		count = 1;
		while (C[i] == prev) {
			++count;
			if (count > maxCount) {
				maxCount = count;
				*mc = prev;
			}
			++i;
		}
		prev = C[i];
	}
	return maxCount;
}

int main() {
	char str[SIZE];

	printf("Enter a string (no space): ");
	scanf("%s", str);

	char mc;
	int n = CountChar(str, &mc);

	printf(
		"The character with maximum consecutive occurence is %c, with count %d. \n",
		mc, n
	);

	return 0;
}
