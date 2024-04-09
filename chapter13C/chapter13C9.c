//find all factors and prime factors of a number
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("All factors of %d are: ",a);
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
            printf("[%d] ",i);     
    }
    printf("\nPrime factors of %d are: ",a);
    for(int m=2;m<a;m++)
    {
        int c=0;
        if(a%m==0)
        for(int j=1;j<=m;j++)
         {
            if(m%j==0)
             c++;         
         }
         if(c==2)
             printf("[%d] ",m);
    }
}