#include <stdio.h>
#include <math.h>
int main()
{
    int x,n;
    printf("Input the value of x : ");
    scanf("%d", &x);
    printf("Input number of terms : ");
    scanf("%d", &n);
    int sum = x,m = -1,c,mt,nt;
    for (int i = 1; i < n; i++)
    {
        c = (2 * i + 1);
        mt = pow(x, c);
        nt = mt * m;
        sum = sum + nt;
        m = m * (-1);
    }
    printf("The sum = %d", sum);
    return 0;
}
