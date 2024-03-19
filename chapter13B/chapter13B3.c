//take 3 sides and check whether it is equi,iso or scalene triangle
#include<stdio.h>
int main()

{
    int a,b,c;
    printf("Enter first side of triangle: ");
    scanf("%d",&a);
    printf("Enter second side of triangle: ");
    scanf("%d",&b);
    printf("Enter third side of triangle: ");
    scanf("%d",&c);
    if(a==b&&b==c&&c==a)
    {
        printf("Equilateral Triangle");
    }
    else if(a!=b&&b!=c&&c!=a)
    {
        printf("Scalene Triangle");
    }
    else(printf("Isosceles Triangle"));
    return 0;
}
