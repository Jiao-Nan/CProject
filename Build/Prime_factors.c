#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int n=0, i=0;
    printf("please input a number:");
    scanf("%d", &n);
    printf("%d=", n);
    for (i = 2; i <= n; i++)
    {
        while (n != i)
        {
            if (n % i == 0)
            {
                printf("%d*", i);
                n = n / i;
            }
            else
                break;
        }
    }
    printf("%d", n);
    return 0;
}
