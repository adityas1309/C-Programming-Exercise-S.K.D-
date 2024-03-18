//convert specific days into years,weeks and days
#include<stdio.h>
int main()
{
    int gday,years,weeks,days;
    printf("Number of days: ");
    scanf("%d",&gday);
    years=gday/365;
    weeks=(gday%365)/7;
    days=(gday%365)%7;
    printf("Years: %d\n",years);
    printf("Weeks: %d\n",weeks);
    printf("Days: %d\n",days);
    return 0;
}
