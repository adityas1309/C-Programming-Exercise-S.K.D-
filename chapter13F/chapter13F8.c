#include<stdio.h>
int main()
{
    int n,pos;
    printf("Input the size of array: ");
    scanf("%d",&n);
    int A[n];
    printf("Input %d elements in the array in ascending order:\n");
    for(int i=0;i<n;i++)
    {
        printf("element - %d: ",i);
        scanf("%d",&A[i]);
    }
    printf("Input the position where to delete: ");
    scanf("%d",&pos);
    int LIP=n;
    for(int i=pos-1;i<LIP;i++)
    {
        A[i]=A[i+1];
    }
    LIP=LIP-1;
    printf("The new list is : ");
    for(int i=0;i<LIP;i++)
    {
        printf("%d ",A[i]);
    }
}
