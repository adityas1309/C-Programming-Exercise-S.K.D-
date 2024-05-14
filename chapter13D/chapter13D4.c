#include <stdio.h>
int main()
{
    int i, n;
    float x, sum=1, t=1, d;
    printf("Input the Value of x : ");
    scanf("%f", &x);
    printf("Input the number of terms : ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        d = (2 * i) * (2 * i - 1);
        t = -t * x * x / d;
        sum = sum + t;
    }
    printf("\nNumber of terms = %d\nValue of x = %f\nThe sum = %f", n, x,sum);

    return 0;
}

