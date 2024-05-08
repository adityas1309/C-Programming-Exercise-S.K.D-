#include<stdio.h>
int main()
{
    int n;
    printf("Input the size of the square matrix(less than 5): ");
    scanf("%d",&n);
    if(n<5)
    {
            int A[n][n],B[n][n],C[n][n];
            printf("Input elements in the first matrix:\n");
            for(int i=0;i<n;i++)
            {
                 for(int j=0;j<n;j++)
                {
                printf("element - [%d][%d]: ",i,j);
                scanf("%d",&A[i][j]);
                }
            }
            printf("Input elements in the second matrix:\n");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    printf("element - [%d][%d]: ",i,j);
                    scanf("%d",&B[i][j]);
                }
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    C[i][j]=A[i][j] + B[i][j];
                }
            }
            printf("\nThe First matrix is:\n");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    printf("%d  ",A[i][j]);
                }
                printf("\n");
            }
            printf("\nThe Second matrix is:\n");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    printf("%d  ",B[i][j]);
                }
                printf("\n");
            }
            printf("\nThe Addition of two matrix is:\n");
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    printf("%d  ",C[i][j]);
                }
                printf("\n");
            }


    }
    else
    {
        printf("Value should be less than 5");
    }
}
