#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter M and N(M<N): ");
    scanf("%d %d",&m,&n);
    for(int j=m;j<=n;j++)
    {
        int a=j,count=0;
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("[%d] ",a);
    }
}
