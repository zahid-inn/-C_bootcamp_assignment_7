#include <stdio.h>

int main()
{
    int a, b, i, num=1;
    int min = a < b ? a : b;

    printf("Enter two numbers ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
            num = i;
    }

    num == 1 ? printf("It is co-prime number") : printf("It is not a co-prime number");

    return 0;
}