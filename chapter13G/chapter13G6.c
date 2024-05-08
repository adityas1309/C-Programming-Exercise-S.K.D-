#include<stdio.h>
int main()
{
    int row1,col1,row2,col2;
    printf("Enter the row and column for First matrix: ");
    scanf("%d %d",&row1,&col1);
    printf("Enter the row and column for Second matrix: ");
    scanf("%d %d",&row2,&col2);
    if(col1==row2)
    {
        int A[row1][col1],B[row2][col2],C[row1][col2];
        printf("Enter elements for First matrix\n");
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col1;j++)
            {
                printf("element - [%d],[%d]: ",i,j);
                scanf("%d",&A[i][j]);
            }
        }
        printf("Enter elements for Second matrix\n");
        for(int i=0;i<row2;i++)
        {
            for(int j=0;j<col2;j++)
            {
                printf("element - [%d],[%d]: ",i,j);
                scanf("%d",&B[i][j]);
            }
        }
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col2;j++)
            {
                int sum=0;
                for(int k=0;k<col1;k++)
                {
                   sum = sum + A[i][k] * B[k][j];
                   C[i][j] = sum;
                }
            }
        }
        printf("\n***************************************************\n");
        printf("The First matrix is:\n");
         for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col1;j++)
            {
                printf("%d ",A[i][j]);
            }
            printf("\n");
        }
        printf("The Second matrix is:\n");
         for(int i=0;i<row2;i++)
        {
            for(int j=0;j<col2;j++)
            {
                printf("%d ",B[i][j]);
            }
            printf("\n");
        }
         printf("The Resultant matrix is:\n");
         for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col2;j++)
            {
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
    }
    else(printf("Multiplication is not possible"));

}


