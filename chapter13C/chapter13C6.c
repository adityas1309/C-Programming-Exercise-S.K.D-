//Take a number and find its factorial
#include<stdio.h>
int main()
{
    int a,fac=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        fac*=i;
    }
    printf("Factorial of %d is = %d",a,fac);
    return 0;
}
