#include <stdio.h>

int main()
{
    int i, n, n2, flag;

    printf("Enter two numbers: ");
    scanf("%d %d", &n, &n2);

    for (n; n <= n2; n++)
    {

        flag = 0;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                flag = 1;
        }
        if (flag == 0)
            printf("%d ", n);
    }
    return 0;
}