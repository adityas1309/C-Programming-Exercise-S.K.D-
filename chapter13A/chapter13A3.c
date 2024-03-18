//WAP to accept 2 int no and perform diff operation

#include<stdio.h>
int main()
{
    int v1,v2,sum,sub,rem,div,mul;
    printf("First number = ");
    scanf("%d",&v1);
    printf("Second number = ");
    scanf("%d",&v2);
    sum=v1+v2;
    sub=v1-v2;
    mul=v1*v2;
    div=v1/v2;
    rem=v1%v2;
    printf("Summation = %d\n",sum);
    printf("Subtraction = %d\n",sub);
    printf("Multiplication = %d\n",mul);
    printf("Division = %d\n",div);
    printf("Remainder = %d\n",rem);
    return 0;
}
