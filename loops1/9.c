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

    if (n > 2)
        for (int i = 2; i < n - 1; i++)
            if (isPrime(i) && isPrime(n - i))
            {
                printf("Yes, %d + %d = %d\n", i, n - i, n);
                return 0;
            }
    printf("Can't be written\n");

    return 0;
}