//Take 10 numbers as input and display how many of them are Odd and Even
#include<stdio.h>
int main()
{
    int a,on=0,en=0;
    printf("Enter 10 numbers:\n");
    for(int i=1;i<=10;i++)
    {
       scanf("%d",&a);
       if(a%2==0)
       {
           en++;
       }
       else if(a%2!=0)
       {
           on++;
       }
    }
    printf("Total number of \"ODD\": %d\n",on);
    printf("Total number of \"EVEN\": %d",en);
    return 0;
}
