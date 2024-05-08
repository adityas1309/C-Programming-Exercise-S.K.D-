#include<stdio.h>
int main()
{
    int n;
    printf("Input the size of the square matrix: ");
    scanf("%d",&n);
    int A[n][n];
    printf("Input elements in the matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("element -[%d],[%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    int lea=0,rea=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                rea=rea+A[i][j];
            if(i+j==n-1)
                lea=lea+A[i][j];
        }
    }
    printf("The matrix is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\nAddition of the Right Diagonal elements is: %d",rea);
    printf("\nAddition of the Left Diagonal elements is: %d",lea);
}
