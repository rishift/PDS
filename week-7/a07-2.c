#include <stdio.h>


typedef struct {
	int numerator;
	int denominator;
} rational;


typedef struct {
	rational real;
	rational imag;
} rat_complex;


int gcd(int m, int n) {
	if (!n) return m;
	return gcd(n, m % n);
}


rational add(rational r1, rational r2) {
	int n = r1.numerator * r2.denominator + r2.numerator * r1.denominator,
	    d = r1.denominator * r2.denominator;

	int df = gcd(n, d);
	if (df < 0) df *= -1;

	return (rational) {n / df, d / df};
}


int main() {

	rat_complex z1, z2;

	printf("Enter the 1st complex number: ");
	scanf("%d/%d", &z1.real.numerator, &z1.real.denominator);
	scanf("%d/%d", &z1.imag.numerator, &z1.imag.denominator);

	printf("Enter the 2nd complex number: ");
	scanf("%d/%d", &z2.real.numerator, &z2.real.denominator);
	scanf("%d/%d", &z2.imag.numerator, &z2.imag.denominator);

	rat_complex z3 = { add(z1.real, z2.real), add(z1.imag, z2.imag) };

	printf("Addition result =  %d/%d + i(%d/%d)\n", z3.real.numerator, z3.real.denominator, z3.imag.numerator, z3.imag.denominator);

	return 0;
}
