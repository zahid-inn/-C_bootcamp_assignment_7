#include <stdio.h>

int main()
{
    int i, n, flag;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    for (n ; ; n++)
    {

        flag = 0;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
                flag = 1;
        }
        if (flag == 0)
        {
            printf("%d ", n);
            break;
        }
    }
    return 0;
}