//take sale amount as input and provide commission rate
#include<stdio.h>
int main()
{
    float c,a;
    printf("Enter the Sale amount: ");
    scanf("%f",&a);
    if(a<500)
    {
        printf("Commission is Rs.35");
    }
    else if(a>=500&&a<=2000)
    {
        c=(10.0/100)*a;  //if .0 not given it will not work because int/int is int which will be 0
        printf("Commision is Rs. %.2f",c);
    }
    else if(a>=2001&&a<=5000)
    {
        c=(15.0/100)*a;
        printf("Commission is Rs. %.2f",c);
    }
    else if(a>5000)
    {
        c=(20.0/100)*a;
        printf("Commission is Rs. %.2f",c);
    }
    return 0;
}
