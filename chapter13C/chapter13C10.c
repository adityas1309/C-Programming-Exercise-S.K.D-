//Display first n terms of fibonacci series
#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("Input number of terms to display: ");
    scanf("%d",&n);
    printf("Here is the Fibonacci series upto 10 terms: \n");
    printf("%d ",a);
    for(int i=1;i<n;i++)
    {
        printf("%d ",b);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
