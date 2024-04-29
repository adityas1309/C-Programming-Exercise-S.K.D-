#include<stdio.h>
int main()
{
    int n,count=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf("  ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}
