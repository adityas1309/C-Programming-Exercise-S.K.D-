#include <stdio.h>
void makeDiagonalZero(int n, int m[][n])
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if ((i + j) == (n - 1))
                m[i][j] = 0;
            if (i == j)
                m[i][j] = 0;
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter the Elements of the %dx%d Matrix: \n", n, n);
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
           scanf("%d", &mat[i][j]);
    }
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    makeDiagonalZero(n, mat);

    printf("\nModified Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}
