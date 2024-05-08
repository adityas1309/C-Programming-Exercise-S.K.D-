#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements to be stored in the array: ");
    scanf("%d",&n);
    int A[n];
    printf("Input %d elements in the array:\n",n);
    for(int i=0;i<n;i++)
    {
        printf("element - %d: ",i);
        scanf("%d",&A[i]);
    }
    printf("The Even elements of EVEN array are:\n");
    for(int i=0;i<n;i++)
    {
        if(A[i]%2==0)
        {
           printf("%d ",A[i]);
        }
    }
    printf("\nThe Odd elements of ODD array are:\n");
    for(int i=0;i<n;i++)
    {
        if(A[i]%2==1)
        {
           printf("%d ",A[i]);
        }
    }
}
