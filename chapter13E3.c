#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int count=1;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}
