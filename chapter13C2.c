//Display n terms of natural number and their sum and average
#include<stdio.h>
int main()
{
    int n,sum=0;
    float avg;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The first %d numbers are: ",n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum+=i;
    }
    avg=(float)sum/n;
    printf("\nSum of first %d numbers: %d\n",n,sum);
    printf("Average of first %d numbers: %.3f",n,avg);
    return 0;
}
