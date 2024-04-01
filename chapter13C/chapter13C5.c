//Display multiplication table vertically from 1 to n
#include<stdio.h>
int main()
{
    int a,mul;
    printf("Input upto the table number starting from 1: ");
    scanf("%d",&a);
    printf("Multiplication table from 1 to %d\n",a);
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=a;j++)
        {
            mul=j*i;
            printf("%d X %d = %d,  ",j,i,mul);
        }
        printf("\n");
    }
    return 0;
}
