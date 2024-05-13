#include <stdio.h>

int isPrime(int n) {
  if (n < 2)
    return 0;
  else
    for (int i = 2; i < n; i++)
      if (!(n % i))
        return 0;
  return 1;
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
        if (isPrime(i))
            printf("%d, ", i);

    printf("\n");

    return 0;
}