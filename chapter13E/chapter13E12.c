#include<stdio.h>
int main()
{
    int n,row;
    printf("Enter the value of n: ");
    scanf("%d",&row);
    n=(row/2)+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf("  ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i=n-1;i>=1;i--)
    {
        for (int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for (int k=1;k<=2*i-1;k++)
        {
            printf("* ");
        }
        printf("\n");

    }
}
