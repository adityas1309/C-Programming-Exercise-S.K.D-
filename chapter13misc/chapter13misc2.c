//Calculate SI ,CI and show final amount
#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,ci,fa_si,fa_ci;
    printf("Enter Principal: ");
    scanf("%f",&p);
    printf("Enter Rate of interest: ");
    scanf("%f",&r);
    printf("Enter Time(in years): ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    fa_si=p+si;
    ci=p*pow(1+r/100,t)-p;
    fa_ci=p+ci;
    printf("Simple interest: %f\n",si);
    printf("Final amount after SI: %f\n",fa_si);
    printf("Compound interest: %f\n",ci);
    printf("Final amount after CI: %f\n",fa_ci);
    return 0;
}
