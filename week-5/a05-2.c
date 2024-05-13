#include <stdio.h>
#define SIZE 1000

int main() {
	char s[SIZE], c;

	printf("Type in a proper string and press <Enter>:\n");
	scanf("%[^\n]", s);

	printf("\nScanned:\n%s\n", s);

	printf("\nNames:\n");

	for(int i = 0;; i++) {
		c = s[i];

		if (c >= 'a' && c <= 'z') 
			printf("%c", c - 'a' + 'A');
		else if (c == ',') {
			i++;
			printf("\n");
		}
		else if (c == '.')
			break;
		else 
			printf("%c", c);
	}

	printf("\n");

	return 0;
}
