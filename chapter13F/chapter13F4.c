#include<stdio.h>
int main()
{
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&n);
    int A[n];
    printf("Input %d elements in the array:\n");
    for(int i=0;i<n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&A[i]);
    }
    printf("The frequency of all elements of an array:\n");
    for(int j=0;j<n;j++)
    {
       int fin=A[j],c=0;
       for(int k=0;k<n;k++)
       {
           if(fin==A[k])
            c++;
       }
       printf("%d occurs %d times\n",fin,c);
    }
}
