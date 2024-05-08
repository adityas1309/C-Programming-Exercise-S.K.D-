#include<stdio.h>
int main()
{
    int row,col;
    printf("Input the size of row of the matrix: ");
    scanf("%d",&row);
    printf("Input the size of column of the matrix: ");
    scanf("%d",&col);
    int A[row][col];
    printf("Input elements in the matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           printf("element - [%d][%d]: ",i,j);
           scanf("%d",&A[i][j]);
        }
    }
    printf("The Original matrix is:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose matrix is:\n");
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
           printf("%d ",A[j][i]);
        }
        printf("\n");
    }

}
