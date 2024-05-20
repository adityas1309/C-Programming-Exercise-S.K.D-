#include<stdio.h>
int main()
{
    int n,j=0,k=0;
    scanf("%d",&n);
    int A[n],OD[n],EN[n];
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            EN[j] = A[i];
            j++;
        }
        else
        {
            OD[k] = A[i];
            k++;
        }
    }
    printf("The Even elements of EVEN array are:\n");
    for(int i=0;i<j;i++)
           printf("%d ",EN[i]);
    printf("\nThe Odd elements of ODD array are:\n");
    for(int i=0;i<k;i++)
           printf("%d ",OD[i]);
}
