#include<stdio.h>
int main()
{
   int n,num,p;
   printf("Input the size of array: ");
   scanf("%d",&n);
   int A[n],LIP=n;
   printf("Input %d elements in the array in ascending order:\n");
   for(int i=0;i<n;i++)
   {
       printf("element - %d:",i);
       scanf("%d",&A[i]);
   }
   printf("Input the value to be inserted :");
   scanf("%d",&num);
   printf("The existing array list is:\n");
   for(int i=0;i<n;i++)
   {
       printf("%d ",A[i]);
   }
   printf("\n");
   for(int i=0;i<n;i++)
   {
       if(num < A[i])
       {
          p=i;
          break;
       }
       else
           p=i+1;
   }
   for (int i = n + 1; i >= p; i--)
        A[i] = A[i - 1];
    A[p]=num;
   printf("After Inserting NEW element the array list is:\n");
   for(int i=0;i<=n;i++)
   {
       printf("%d ",A[i]);
   }
}
