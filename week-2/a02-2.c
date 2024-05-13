#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	printf("Enter a, b, c: ");
	scanf("%lf%lf%lf", &a, &b, &c);

	double D = b*b - 4*a*c;
	double x = -b / (2*a),
	       y = sqrt(D < 0 ? -D : D) / (2*a);

	if (D < 0) {
		double z = sqrt(x*x + y*y);
		double r = sqrt((z+x) / 2),
		       s = sqrt((z-x) / 2);

		printf("Roots = %0.3lf+i%0.3lf, -%0.3lf+i%0.3lf, %0.3lf-i%0.3lf, -%0.3lf-i%0.3lf", r, s, r, s, r, s, r, s);

	} else {
		double p = x+y,
		       q = x-y;

		printf("Roots = ");

		if (p < 0) printf("i%0.3lf, -i%0.3lf, ", sqrt(-p), sqrt(-p));
		else printf("%0.3lf, %0.3lf, ", sqrt(p), -sqrt(p));

		if (q < 0) printf("i%0.3lf, -i%0.3lf", sqrt(-q), sqrt(-q));
		else printf("%0.3lf, %0.3lf", sqrt(q), -sqrt(q));
	}

	printf("\n");
	return 0;
}
