#include <stdio.h>

int main() {
	int a, b, c, d, e;
	int a1,b1,c1,d1,e1;

	printf("Enter a, b, c, d, e: ");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

	printf("Median = ");

	a1 = abs(b+c+d+e-4*a);
	b1 = abs(a+c+d+e-4*b);
	c1 = abs(b+a+d+e-4*c);
	d1 = abs(b+c+a+e-4*d);
	e1 = abs(b+c+d+a-4*e);

	int m=a1;
	if(b1<m)m=b1;
	if(c1<m)m=c1;
	if(d1<m)m=d1;
	if(e1<m)m=e1;

	if (m==a1) printf("%d", a);
	if (m==b1) printf("%d", b);
	if (m==c1) printf("%d", c);
	if (m==d1) printf("%d", d);
	if (m==e1) printf("%d", e);

	return 0;
}
