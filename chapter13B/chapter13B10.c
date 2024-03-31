//Check whether a triangle is valid or not
#include<stdio.h>
int main()
{
  int a,b,c,sum;
  printf("Enter 1st side of triangle: ");
  scanf("%d",&a);
  printf("Enter 2nd side of triangle: ");
  scanf("%d",&b);
  printf("Enter 3rd side of triangle: ");
  scanf("%d",&c);
  sum=(a+b+c);
  if(sum==180)
  {
      printf("This triangle is valid");
  }
  else if(sum!=180)
  {
      printf("This triangle is not valid");
  }
  return 0;
}
