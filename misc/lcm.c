// Compute the LCM of two numbers;

#include <stdio.h>

int main() {
    int a, b, m, n, t;
    printf("Enter  a, b: ");
    scanf("%d%d", &a, &b);

    if (a > b) 
        m = a, n = b;
    else 
        m = b, n = a;

    while (n) {
        t = m;
        m = n;
        n = t % n;
    }
    
    printf("LCM = %d\n", a * b / m);

    return 0;
}