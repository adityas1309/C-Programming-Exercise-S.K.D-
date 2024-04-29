#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
