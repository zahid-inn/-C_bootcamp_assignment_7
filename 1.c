#include <stdio.h>

int main()
{
    int p=0, c=1, n, nxt, count=1;

    printf("Enter a number ");
    scanf("%d", &n);

    do
    {
        nxt = p+c;
        p = c;
        c = nxt;
        count++;
    } while (count < n);

    printf("The nth term of fibonacci is %d", nxt);
    
    return 0;
}