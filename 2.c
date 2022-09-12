#include <stdio.h>

int main()
{
    int p = 0, c = 1, n, nxt, count = 1;

    printf("Enter a number ");
    scanf("%d", &n);

    printf("1 ");
    while (count < n)
    {
        nxt = p + c;
        p = c;
        c = nxt;
        printf("%d ", nxt);
        count++;
    }

    return 0;
}