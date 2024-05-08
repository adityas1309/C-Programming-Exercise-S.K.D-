#include<stdio.h>
int main()
{
    int n;
    printf("Input the numbers of elements to be stored in the array: ");
    scanf("%d",&n);
    int A[n];
    printf("input %d elements in the array:\n");
    for(int i=0;i<n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&A[i]);
    }
    printf("The unique elements found in the array are:\n");
    for(int j=0;j<n;j++)
    {
       int fin=A[j],c=0;
       for(int k=0;k<n;k++)
       {
          if(fin==A[k])
            c++;
       }
       if(c==1)
        printf("[%d] ",fin);
    }

}
