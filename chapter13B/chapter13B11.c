//Check whether a no. is odd or even
#include<stdio.h>
int main()
{
    int a,rem;
    printf("Enter the number: ");
    scanf("%d",&a);
    rem=a%2;
    if(rem==0)
    {
        printf("EVEN");
    }
    else if(rem!=0)
    {
        printf("ODD");
    }
    return 0;
}
