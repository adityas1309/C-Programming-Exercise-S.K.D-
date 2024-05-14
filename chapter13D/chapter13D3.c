#include <stdio.h>
int main()
{
  int n,i,sum=0,r,rev=0,s=0;
  int c= 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  for(i=n;i>0;i=i/10)
  {
      c++;
      r=i%10;
      sum=sum+r;
      rev=rev*10+r;
      s=s+r*r*r;
  }

  printf("Total number of digits: %d\n", c);
  printf("The sum of all digits: %d\n",sum);
  printf("Reverse of %d is: %d",n,rev);
  if(rev==n)
    printf("\n%d is a palindrome number",n);
  else
  printf("\n%d is not a palindrome number",n);
  if(s==n)
    printf("\n%d is an armstrong number",n);
  else
  printf("\n%d is not an armstrong number ",n);


}
