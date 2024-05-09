#include<stdio.h>
int main()
{
    int a,n;
    printf("input the size of array: ");
    scanf("%d",&a);
    int A[a];
    for(int i=0;i<a;i++)
    {
        printf("element - %d: ",i);
        scanf("%d",&A[i]);
    }
    printf("Enter the position number: ");
    scanf("%d",&n);
    printf("\nThe given array is: ");
    for(int i=0;i<a;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nFrom position no. %d the values of array are: ",n);
    for(int i=n;i<a;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nBefore position no. %d the values of array are: ",n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nAfter rotating from position no. %d the array is:\n",n);
    for(int i=n;i<a;i++)
    {
        printf("%d ",A[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
