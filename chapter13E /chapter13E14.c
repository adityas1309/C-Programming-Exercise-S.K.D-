#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=1;i++)
    {
        for(int j=1;j<=n;j++)
            printf("  ");
        for(int k=1;k<=i;k++)
            printf("%c ",64+i);
    }
    printf("\n");
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n-i;j++)
            printf("  ");
        for(int k=1;k<=i;k++)
            printf("%c ",k+64);
        for(int m=i+65;m>64;m--)
            printf("%c ",m);
        printf("\n");
    }
}
