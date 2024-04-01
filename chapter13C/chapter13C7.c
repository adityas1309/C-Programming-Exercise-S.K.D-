//Take a number and find all factors of it
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Factors of %d are =",a);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("[%d]",i);
        }
    }
    return 0;
}
