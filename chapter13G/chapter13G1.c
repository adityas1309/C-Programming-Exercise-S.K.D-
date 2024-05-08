#include<stdio.h>
int main()
{
    int A[3][3];
    printf("Input elements in the matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("element - [%d],[%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
