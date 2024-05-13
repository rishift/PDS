#include <stdio.h>

int sq(int a)
{
    return a * a;
}

int main()
{
    int c[100][2];

    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter coordinates: ");
    for (int i = 0; i < n; i++)
        scanf("%d%d", &c[i][0], &c[i][1]);

    int d, mind = 999999, h, k;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            d = sq(c[i][0] - c[j][0]) + sq(c[i][1] - c[j][1]);
            if (d < mind)
            {
                mind = d;
                h = i;
                k = j;
            }
        }
    }

    printf("Closest pair is (%d, %d) and (%d, %d).\n", c[h][0], c[h][1], c[k][0], c[k][1]);

    return 0;
}