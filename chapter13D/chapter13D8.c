#include <stdio.h>
int main()
{
    int n1, df, n2, i, ln;
    int s1 = 0;
    printf("Input  the starting number of the A.P. series: ");
    scanf("%d", &n1);
    printf("Input the number of items for the A.P. series: ");
    scanf("%d", &n2);
    printf("Input the common difference of A.P. series: ");
    scanf("%d", &df);
    s1 = (n2 * (2 * n1 + (n2 - 1) * df)) / 2;
    ln = n1 + (n2 - 1) * df;
    printf("The Sum of the A.P. series are : \n");
    for (i = n1; i <= ln; i = i + df)
    {
         if (i != ln)
             printf("%d + ", i);
         else
             printf("%d = %d", i, s1);
    }
return 0;
}
