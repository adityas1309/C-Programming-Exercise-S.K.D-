#include<stdio.h>
void convert(int, int);

int main()
{
        int num;
        printf("Enter a positive integer number : ");
        scanf("%d", &num);
        printf("\nBinary number :: ");
        convert(num, 2);
        printf("\nOctal number :: ");
        convert(num, 8);
        return 0;
}

void convert(int num, int base)
{
        int rem = num%base;
        if(num==0)
                return;
        convert(num/base, base);
        if(rem < 10)
                printf("%d", rem);

}
