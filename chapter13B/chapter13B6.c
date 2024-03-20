//Accept a real no. x adn print corresponding value of sin(1/x) using 4 dec place
#include<stdio.h>
#include<math.h>
int main()
{
    double x,b,sine; //float(32 bit)vis less precise double(64 bit) is more precise
    printf("Input value of x: ");
    scanf("%lf",&x);
    if(x!=0)
    {
      sine=sin(1/x);
      printf("Value of sin(1/x) is %.4lf",sine);
    }
    else if(x==0)
    {
        printf("Value of sin(1/x) is \"Not possible\""); //se a backslash (\) before the double quote to indicate that it's not the end of the string
    }
    return 0;
}
