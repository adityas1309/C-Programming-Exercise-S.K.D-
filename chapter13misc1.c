//Calculate area of square, rectangle and circle
#include<stdio.h>
int main()
{
    float s_sq,l_rec,b_rec,r_cir,ar_sq,ar_rec,ar_cir;
    printf("Enter the sides of square: ");
    scanf("%f",&s_sq);
    printf("Enter the length of rectangle: ");
    scanf("%f",&l_rec);
    printf("Enter the breadth of rectangle: ");
    scanf("%f",&b_rec);
    printf("Enter the radius of circle: ");
    scanf("%f",&r_cir);
    ar_sq=(s_sq*s_sq);
    ar_rec=(l_rec*b_rec);
    ar_cir=(2*3.14*r_cir);
    printf("Area of square: %f\n",ar_sq);
    printf("Area of rectangle: %f\n",ar_rec);
    printf("Area of circle: %f\n",ar_cir);
    return 0;
}
