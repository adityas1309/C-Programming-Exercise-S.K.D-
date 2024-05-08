#include<stdio.h>
int main()
{
    int n;
    printf("Input the size of array:");
    scanf("%d",&n);
    int A[n],B[n],C[n];
    printf("Input elements for 1ST array:\n");
    for(int i=0;i<n;i++)
    {
        printf("element- %d: ",i);
        scanf("%d",&A[i]);
    }
    printf("\nInput elements for 2ND array:\n");
    for(int i=0;i<n;i++)
    {
        printf("element- %d: ",i);
        scanf("%d",&B[i]);
    }
    for(int i=0;i<n;i++)
    {
        C[i] = A[i] + B[i];
    }
    printf("\nArray 1  Array 2  Array 3\n");
    for(int i=0;i<n;i++)
    {
        printf("%d     +    %d   =  %d\n",A[i],B[i],C[i]);
    }
}
