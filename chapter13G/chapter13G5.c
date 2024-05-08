#include<stdio.h>
int main()
{
    int n;
    printf("Input the size of the matrix: ");
    scanf("%d",&n);
    int A[n][n];
    printf("Input the elements of the matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("element -[%d],[%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nThe Matrix is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
    printf("\nThe sum of rows and columns of the matrix is:\n");
    for(int i=0;i<n;i++)
    {
        int ra=0;
        for(int j=0;j<n;j++)
        {
            printf("%d   ",A[i][j]);
            ra=ra+A[i][j];
        }
        printf("=  %d\n",ra);
    }
    for(int i=0;i<n;i++)
    {
        printf("__  ");
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        int ca=0;
        for(int j=0;j<n;j++)
        {
            ca=ca+A[j][i];
        }
        printf("%d  ",ca);
    }
}
