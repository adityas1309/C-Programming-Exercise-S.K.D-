//Reads 2 nos and divide the 1st no by 2nd no if div not possible give message
#include<stdio.h>
int main()
{
    int x,y;
    float div;
    printf("Input two numbers:\n");
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    if(x%y==0)
    {
        div=x/y;
        printf("%.1f",div);
    }
    else if(x%y!=0)
    {
        printf("Division not possible");
    }
    return 0;
}
