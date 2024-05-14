#include <stdio.h>
int main()
{
    int a= 0, b= 1, c, i, n,count=0;
    printf("Input number of terms to display: ");
    scanf("%d", &n);
    printf("Here is the Fibonacci series up to %d terms:\n", n);
    printf("%d %d ",a,b);
    for (i = 3; i <= n; i++)
    {
        c = a+b;
        printf("%d ",c);
        a= b;
        b = c;
    }
    printf("\nThe prime Fibonacci Numbers are:\n");
    int z= 0, y= 1, p;
    for (i = 3; i <= n; i++)
    {
        p = z+y;
        int f=p,count=0;
        for(int j=2;j<=f/2;j++)
        {
            if(f%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0 && p!=1)
            printf("[%d] ",f);
        z= y;
        y = p;
    }
    return 0;
}

