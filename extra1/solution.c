#include <stdio.h>
#include <math.h>

int main()
{

    /////////////

    // int m, n;

    // printf("Enter m, n: ");
    // scanf("%d%d", &m, &n);

    // printf("\nm = %d, n = %d.\n\n", m, n);

    ////////////

    // int a, b, t;

    // if (m > n)
    //     a = m, b = n;
    // else
    //     a = n, b = m;

    // while (b)
    // {
    //     t = a;
    //     a = b;
    //     b = t % b;
    // }

    // printf("LCM = %d.\n\n", m * n / a);

    //////////////

    int p;
    do
    {
        printf("Enter p: ");
        scanf("%d", &p);
    } while ((p <= 3) || (p >= 20));

    printf("p = %d\n\n", p);

    ////////////

    // float X[20];
    // float Y[20];

    // float x, y;

    // for (int i = 0; i < p; i++)
    // {
    //     printf("enter coordinates x, y: ");
    //     scanf("%f%f", &x, &y);
    //     X[i] = x;
    //     Y[i] = y;
    // }
    // printf("Entered points are: ");
    // for (int i = 0; i < p; i++)
    // {
    //     printf("(%f, %f), ", X[i], Y[i]);
    // }

    // printf("\b\b.\n\n");

    /////////////

    // float mind = 9999999999;
    // float dist;
    // int i1, i2;

    // for (int i = 0; i < p; i++)
    // {
    //     for (int j = i + 1; j < p; j++)
    //     {
    //         dist = pow(X[i] - X[j], 2) + pow(Y[i] - Y[j], 2);
    //         if (dist < mind)
    //         {
    //             mind = dist;
    //             i1 = i;
    //             i2 = j;
    //         }
    //     }
    // }
    // printf("Minimum distance is %f\nbetween points (%f, %f) and (%f, %f)\n\n", sqrt(mind), X[i1], Y[i1], X[i2], Y[i2]);

    ////////////

    // float xmax = -999999999;
    // float xmin = 9999999999;
    // float ymax = -999999999;
    // float ymin = 9999999999;

    // float xi, yi;
    // int ir, il, it, ib;

    // for (int i = 0; i < p; i++)
    // {
    //     xi = X[i];
    //     yi = Y[i];

    //     if (xi < xmin)
    //     {
    //         xmin = xi;
    //         il = i;
    //     }
    //     if (xi > xmax)
    //     {
    //         xmax = xi;
    //         ir = i;
    //     }
    //     if (yi < ymin)
    //     {
    //         ymin = yi;
    //         ib = i;
    //     }
    //     if (yi > ymax)
    //     {
    //         ymax = yi;
    //         it = i;
    //     }
    // }
    // printf("Leftmost point: (%f, %f)\nRightmost point: (%f, %f)\nTopmost point: (%f, %f)\nBottom-most point: (%f, %f)\n", X[il], Y[il], X[ir], Y[ir], X[it], Y[it], X[ib], Y[ib]);

    ///////////

    float maxa = 0;
    float area = 0;
    int i1, i2, i3;

    for (int i = 0; i < p; i++)
    {
        for (int j = i + 1; j < p; j++)
        {
            for (int k = j + 1; k < p; k++)
            {

                area = fabs(X[0] * (Y[1] - Y[2]) + X[1] * (Y[2] - Y[1]) + X[2] * (Y[0] - Y[1]));
                if (area > maxa)
                {
                    maxa = area;
                    i1 = i, i2 = j, i3 = k;
                }
            }
        }
    }

    printf("Max area is %f of the triangle formed by (%f, %f) (%f, %f) (%f, %f)", maxa, X[i1], Y[i1], X[i2], Y[i2], X[i3], Y[i3]);
    return 0;
}
