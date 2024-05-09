#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int count=0;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            count++;
            break;
        }
    }
    if(count>0)
        printf("%d is NOT PRIME",a);
    else(printf("%d is PRIME",a));
}
