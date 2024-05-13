#include <stdio.h>

int main()
{
    unsigned char r = 'r';
    printf("%3d %b\n", r, r);
    printf("%3d %07b\n", r ^ 0b1111111, r ^ 0b1111111);
    printf("MSB %d\n", r >> 6);
    printf("final %07b\n", (r ^ 0b1111111) ^ ((r >> 6) << 6));

    return 0;
}