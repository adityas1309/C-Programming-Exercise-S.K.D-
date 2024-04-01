//Take total marks and provide Grade
#include<stdio.h>
int main()
{
    int a;
    printf("Enter total marks: ");
    scanf("%d",&a);
    if(a<40)
    {
        printf("Fail");
    }
    else if(a>=40&&a<=49)
    {
        printf("D");
    }
    else if(a>=50&&a<=59)
    {
        printf("C");
    }
    else if(a>=60&&a<=69)
    {
        printf("B");
    }
    else if(a>=70&&a<=79)
    {
        printf("A");
    }
    else if(a>=80&&a<=89)
    {
        printf("E");
    }
    else if(a>=90&&a<=100)
    {
        printf("O");
    }
    return 0;
}
