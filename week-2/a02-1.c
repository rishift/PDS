#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;

	printf("Enter a, b, c: ");
	scanf("%lf%lf%lf", &a, &b, &c);

	if (a == 0) 
		if (b == 0) printf("Invalid equation!");
		else printf("Linear equation, root: %0.3lf", -c/b);		
	else {
		double D = b*b - 4*a*c;
		double x = -b / (2*a),
		       y = sqrt(D < 0 ? -D : D) / (2*a);
		if (D < 0) printf("Complex roots: %0.3lf - i%0.3lf, %0.3lf + i%0.3lf", x, y, x, y);
		else printf("Real roots: %0.3lf, %0.3lf", x+y, x-y);
	}
	printf("\n");

	return 0;
}
