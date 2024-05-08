#include<stdio.h>
int main()
{
    int coun=0,n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&n);
    int A[n];
    printf("Input %d elements in the array:\n",n);
    for(int i=0;i<n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&A[i]);
    }
    for(int j=0;j<n;j++)
    {
       int fin=A[j];
       for(int k=j+1;k<n;k++)
       {
           if(fin==A[k])
           {
             coun++;
             break;
           }
       }
    }
    printf("Total number of duplicate elements found in the array is : %d",coun);
}
