#include <stdio.h>
float add(float num1, float num2)
{
    return num1 + num2;
}
float sub(float num1, float num2)
{
    return num1 - num2;
}
float mult(float num1, float num2)
{
    return num1 * num2;
}
float div(float num1, float num2)
{
    return num1 / num2;
}
int main()
{
      float result=0.0f;
      int num1,num2,opt;
      printf("Enter the first Integer :");
      scanf("%d",&num1);
      printf("Enter the second Integer :");
      scanf("%d",&num2);
      printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.");
      printf("\nInput your option : ");
      scanf("%d",&opt);

    switch(opt)
    {
        case 1:
            result = add(num1, num2);
            break;
        case 2:
            result = sub(num1, num2);
            break;
        case 3:
            result = mult(num1, num2);
            break;
        case 4:
            result = div(num1, num2);
            break;
        default:
            printf("Invalid operator");
    }
    printf("The result is : %.2f",result);
    return 0;
}

