#include <stdio.h>
int isEqual(int n,int A[n],int B[n]);
int main()
{
    int n1, n2;
    printf("enter size of array 1 : ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("enter elements of array 1 : ");
    for(int i=0; i<n1; i++)
        scanf("%d",&arr1[i]);
    printf("enter size of array 2 : ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("enter elements of array 2 : ");
    for(int i=0; i<n2; i++)
        scanf("%d",&arr2[i]);
    if(n1!=n2)
        printf("Arrays are not equal");
    else
        isEqual(n1,arr1,arr2);
    return 0;
}
int isEqual(int n,int A[n],int B[n])
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(A[i]==B[j])
            {
                count++;
                break;
            }
        }
    }
    if(count==n)
        printf("Arrays are equal");
    else
        printf("Arrays are not equal");
}
