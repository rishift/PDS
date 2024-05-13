#include <stdio.h>
#include <string.h>


typedef struct {
	char name1[10], name2[10];
	float basic_price;
} menu;


void printrep(char s, int n) {
	for (int i = 0; i < n; ++i) printf("%c", s);
}


int main() {

	menu items[100];
	
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; ++i) {
		scanf("%s%s%f", items[i].name1, items[i].name2, &items[i].basic_price);	
	}

	printrep('=', 36);
	printf("\nVEG MENU\n");
	printrep('=', 36);
	printf("\n");

	char n1[10], n2[10];
	float bp;
	int dlen;
	int c = 1;	

	for (int i = 0; i < n; ++i) {

		strcpy(n1, items[i].name1);
		strcpy(n2, items[i].name2);
		bp = items[i].basic_price;

		if (!(strcmp(n1, "veg") && strcmp(n2, "veg"))) {
			dlen = 25 - strlen(n1) - strlen(n2);

			printf("%d: %s %s ", c++, n1, n2);
			printrep('-', dlen);
			printf(" %0.2f\n", 1.125 * bp); 
		}
	}

	printrep('=', 36);
	printf("\n");

	return 0;
}
