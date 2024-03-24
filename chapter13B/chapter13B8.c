//Calc electricity bill take id,name and unit as input
#include<stdio.h>
int main()
{
    int id,unit;
    char name[100];
    float amt_chr,charge,sur,net;
    scanf("%d\n",&id);
    fgets(name,sizeof(name),stdin);
    scanf("%d",&unit);
    if(unit<=199)
    {
        charge=1.20;
        amt_chr=unit*charge;
    }
    else if(unit>=200&&unit<400)
    {
        charge=1.50;
        amt_chr=unit*charge;
    }
    else if(unit>=400&&unit<600)
    {
        charge=1.80;
        amt_chr=unit*charge;
    }
    else if(unit>=600)
    {
        charge=2.00;
        amt_chr=unit*charge;
    }
    if(amt_chr<100)
    {
        amt_chr=0;
        printf("Minimum bill should be of Rs.100/-\n");
    }
    else if(amt_chr>400)
    {
        sur=amt_chr*(15.0/100);
    }
    else if(amt_chr>=100&&amt_chr<=400)
    {
        sur=0;
    }
    net=amt_chr+sur;
    printf("Customer IDNO: %d\n",id);
    printf("Customer Name: %s",name);
    printf("Unit consumed: %d\n",unit);
    printf("Amount Charges @Rs. %.2f per unit: %.2f\n",charge,amt_chr);
    printf("Surcharge amount: %.2f\n",sur);
    printf("Net amount paid by the customer: %.2f",net);
    return 0;
}
