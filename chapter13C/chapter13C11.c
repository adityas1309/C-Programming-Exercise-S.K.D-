//Find HCF of 2 numbers
#include<stdio.h>
int main()
{
    int a,b,m,z,k;
    printf("Enter 1st number for HCF: ");
    scanf("%d",&a);
    printf("Enter 2nd number for HCF: ");
    scanf("%d",&b);
    printf("HCF of %d and %d is: ",a,b);
    if(a>b)
        m=a;
    else if(b>a)
        m=b;
    for(int i=1;i<=m;i++)
    {
        if(a%i==0&&b%i==0)
            k=i;
    }
    printf("%d",k);
    return 0;
}
