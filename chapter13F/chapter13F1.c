#include<stdio.h>
int main()
{
    int n,even;
    printf("Enter the total number of data: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter the data:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int max=A[0],min=A[0],ce=0;
    for(int j=0;j<n;j++)
    {
        if(A[j]>max)
            max=A[j];
        if(A[j]<min)
            min=A[j];
        even=A[j]%2;
        if(even==0)
            ce++;
    }
    printf("Maximum number             : %d\n",max);
    printf("Minimum number             : %d\n",min);
    printf("Total No. of even number   : %d\n",ce);
    printf("Prime numbers are          :");
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int k=2;k<=(A[i])/2;k++)
        {
            if(A[i]%k==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("[%d] ",A[i]);
    }
}
