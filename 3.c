#include <stdio.h>

int main()
{
    int p = 0, c = 1, nxt, n, count = 1;

    printf("Enter a number ");
    scanf("%d", &n);

    while (c <= n)
    {
        nxt = p + c;
        p = c;
        c = nxt;
        if (n == nxt || n == 1)
        {
            printf("Available");
            break;
        }

        count++;
    }
    if (n != nxt)
    {
        printf("Not Avialable");
    }

    return 0;
}