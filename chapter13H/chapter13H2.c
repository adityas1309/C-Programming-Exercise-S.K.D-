#include <stdio.h>
#include<math.h>
int factor(int a);
int primefactor(int a);
int perfect(int a);
int armstrong(int a);
int countd(int a);
int prime(int a);
int factorial(int a);
int fibonacci(int a);
int main()
{
      int num,opt;
      printf("Enter the Number :");
      scanf("%d",&num);
      printf("1.Print all the factors of that number\n");
      printf("2.Print all the prime factors of that number\n");
      printf("3.Print the factorial of that number\n");
      printf("4.Check whether that number is Prime or Not.\n");
      printf("5.Check whether that number is a Fibonacci number or not.\n");
      printf("6.Count the number of digits present in that Number\n");
      printf("7.Check that number is a armstrong number or not\n");
      printf("8.Check that number is a perfect number or not\n");
      printf("\nInput your option : ");
      scanf("%d",&opt);

    switch(opt)
    {
        case 1:
            factor(num);
            break;
        case 2:
            primefactor(num);
            break;
        case 3:
            factorial(num);
            break;
        case 4:
            prime(num);
            break;
        case 5:
            if (fibonacci(num))
            printf("%d is a Fibonacci number", num);
            else
            printf("%d is not a Fibonacci number", num);
            break;
        case 6:
            countd(num);
            break;
        case 7:
            armstrong(num);
            break;
        case 8:
            perfect(num);
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}
int factor(int a)
{
    printf("Factors of %d are =",a);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
            printf("[%d] ",i);
    }
}
int primefactor(int a)
{
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
int fibonacci(int a)
{
    return (sqrt(5 * a * a + 4) == floor(sqrt(5 * a * a + 4))) || (sqrt(5 * a * a - 4) == floor(sqrt(5 * a * a - 4)));
}
int factorial(int a)
{
    double fac=1;
    for(int i=1;i<=a;i++)
        fac*=i;
    printf("Factorial of %d is = %lf",a,fac);
}
int prime(int a)
{
    int count=0;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            count++;
            break;
        }
    }
    if(count>0)
        printf("%d is NOT PRIME",a);
    else(printf("%d is PRIME",a));
}
int countd(int a)
{
    int c=0;
    for(int i=a;i>0;i=i/10)
        c++;
    printf("Total number of digits: %d", c);
}
int armstrong(int a)
{
    int r,s=0;
    for(int i=a;i>0;i=i/10)
    {
      r=i%10;
      s=s+r*r*r;
    }
    if(s==a)
    printf("%d is an armstrong number",a);
    else
    printf("%d is not an armstrong number ",a);
}
int perfect(int a)
{
    int result=0;
    for(int i=1;i<=a;i++)
    {
      if(a%i==0)
         result=result+i;
    }
   if(result==2*a)
      printf("It is a perfect number");
   else
      printf("It is not a perfect number");
}

