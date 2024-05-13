#include <stdio.h>

int main()
{
    char i;

    for (i = 'a'; i <= 'z'; i++)
        printf("%c = %d\n", i, i);

    for (i = 'A'; i <= 'Z'; i++)
        printf("%c = %d\n", i, i);

    return 0;
}