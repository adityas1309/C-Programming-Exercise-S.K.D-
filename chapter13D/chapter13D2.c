#include <stdio.h>
int main()
{
    int n,i,t= 9,sum= 0;
    printf("Input the number or terms :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i < n)
        {
            sum += t;
            printf("%ld + ", t);
            t = t * 10 + 9;
        }
        if (i == n)
        {
            sum += t;
            printf("%ld", t);
            t = t * 10 + 9;
        }

    }

    printf("\nThe sum of the series = %d", sum);

    return 0;
}
