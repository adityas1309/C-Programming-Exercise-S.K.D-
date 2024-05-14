#include <stdio.h>
int main()
{
    int d1 = 0 , d2 = 0, n , k=1 , sum=0;
    printf("Enter the nth term:");
    scanf("%d", &n);
    printf("The series: ");
    for(int i=1 ; i<=n ; i++)
    {
      d1 = d1*10 + i;
      d2 =  k*d1;
      k = k*(-1);
      sum=sum+d2;
      if(i%2==1)
      {
        if(i!=1)
        printf("+%d",d2);
        else
        printf("%d",d2);
      }
      else
      printf("%d",d2);
    }
    printf("\nSum = %d",sum);
}
