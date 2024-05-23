#include <stdio.h>
int doSort(int n,int array[n])
{
	int t;
	for (int i = 0; i < n; i++)
    {
		for (int j = i + 1; j < n; j++)
        {
			if (array[i] < array[j])
			{
				t = array[i];
				array[i] = array[j];
				array[j] = t;
			}
		}
	}
}
int main()
{
	int n;
    printf("Enter total number of elements: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter the data: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("Before sorting:\n");
    for (int i = 0; i < n; i++)
		printf("%d ", A[i]);
    printf("\nAfter sorting:\n");
	doSort(n,A);
	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);
	return 0;
}
