#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("The positive divisors are: ");
    int s=0;
    for(int i=1;i<a;i++)
    {
      if(a%i==0)
      {
         printf("%d ",i);
         s=s+i;
      }

    }
    if(s==a)
        printf("\n%d is a perfect number",a);
    else(printf("\n%d is not a perfect number",a));
}
