#include <stdio.h>
#include <math.h>

float a, b, c; 

float f(float x) {
    return x*x*x + a*x*x + b*x + c;
}

int main() {
       
    printf("Enter a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    float x2 = fabs(a) + fabs(b) + fabs(c),
        x1 = -x2;
    
    while (1) {
        float x = (f(x1) * (x1 - x2)) / (f(x2) - f(x1)) + x1;
        float fx = f(x);

        if (fabs(fx) < 0.0001) {
            printf("Real root = %f\n", x);
            break;
        }

        float t;

        if (fx <= 0) {
            x1 = x;
            t = (x + x2) / 2;
            if (f(t) >= 0)
                x2 = t;
        } else {
            x2 = x;
            t = (x + x1) / 2;
            if (f(t) >= 0)
                x1 = t;
        }
    }

    return 0;
}


