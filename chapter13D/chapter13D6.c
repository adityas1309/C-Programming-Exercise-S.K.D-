#include <stdio.h>
int main()
{
    int n,r,sum,temp,sn, en;
    printf("Input starting number of range: ");
    scanf("%d", &sn);
    printf("Input ending number of range : ");
    scanf("%d", &en);
    printf("Armstrong numbers in the given range are: ");
    for (n=sn;n<=en;n++)
    {
        temp= n;
        sum= 0;
        while (temp != 0)
        {
            r = temp % 10;
            temp = temp / 10;
            sum = sum + (r * r * r);
        }
        if (sum == n)
            printf("%d ", n);
    }

    return 0;
}
