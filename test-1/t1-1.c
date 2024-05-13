#include <stdio.h>

int main() {
	int x, g2 = 1;

	printf("Enter x: ");
	scanf("%d", &x);

	int g1 = x%8 ? (x%4 ? (x%2 ? 1 :2) :4) :8;
	if (x < 80) {
		if (!(80%x)) g2 = x;
		if (x%2==0) g2 = 2;
		if (x%4==0) g2 = 4;
		if (x%8==0) g2 = 8;
		if (x%10==0) g2 = 10;
		if (x%16==0) g2 = 16;
		if (x%20==0) g2 = 20;
		if (x%40==0) g2 = 40;
	} else g2 = x%80 ? (x%40 ? (x%20 ? (x%16 ? (x%10 ? (g1) :10) :16) :20) :40) :80;
	printf("GCD(x,  8) = %d\nGCD(x, 80) = %d\n", g1, g2);

	return 0;
}
