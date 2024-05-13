#include <stdio.h>
#include <math.h>

int main() {
	float u, theta;
	float a, b;

	const float g = 9.81;

	printf("Enter u and theta: ");
	scanf("%f%f", &u, &theta);

	// when striking the ground, y = 0; hence we obtain a quadratic eqn in x;
	// one root is x = 0 (i.e. origin) and the other is given by 
	// x = 2*u^2*tan(theta)*cos^2(theta)/g

	a = 2 * u*u * tan(theta) * pow(cos(theta), 2) / g;

	// parabola is symmetric about its axis and hence the topmost point occurs
	// at x = range/2.	

	b = a/2 * tan(theta) - g * (a/2) * (a/2) / (2 * u*u * pow(cos(theta), 2));

	printf("(a) %0.3f   (b) %0.3f\n", a, b);
	
	return 0;
}
