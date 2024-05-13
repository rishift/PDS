#include <stdio.h>

int main() {
    int n, r;
    printf("Enter n, r: ");
    scanf("%d%d", &n, &r);

    double res = 1;
    while (r > 0) 
        res *= (float)n--/r--;
    
    printf("nCr =  %lld\n", (long long)res);

    return 0;
}