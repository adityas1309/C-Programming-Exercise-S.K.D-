#include <stdio.h>
int main()
{
    int n,temp;
    printf("Enter total number of elements: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the data: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printf("Array elements after sorting: ");
    for (int i = 0; i < n; i++)
        printf("%d  ", A[i]);
    return 0;
}
