#include <stdio.h>
#include <math.h>

int main()
{
    int n, count=0, r, z;

    printf("Enter a number");
    scanf("%d", &n);
    z=n;

    while (z)
    {
        z = z/10;
        count++;
    }
    z=n;
    while ()
    {
        z = z % 10;
        pow(z, count);
    }
    
    return 0;
}