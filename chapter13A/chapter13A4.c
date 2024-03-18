//Program to print name,dob and mobile

//taking input from user
#include<stdio.h>
int main()
{
    char nam[30];
    char dob[30];
    int mob;
    printf("Name : ");
    scanf("%s",nam);
    printf("DOB : ");
    scanf("%s",dob);
    printf("Mobile : ");
    scanf("%d",&mob);
    printf("%s \n%s \n%d",nam,dob,mob);
    return 0;
}
//direct writing in codec
/*int details()
{
    printf("Name : Aditya_Singh");
    printf("DOB : 13Sept2005");
    printf("Mobile : 99999999");
    return 0;
}*/
