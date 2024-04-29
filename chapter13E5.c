#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d ",k);
        }
        for(int m=i-1;m>0;m--)
        {
            printf("%d ",m);
        }
        printf("\n");
    }
}
