#include <stdio.h>
int main()
{
    char str[150];
    int count=0;
    printf("Enter a line of string: ");
    fgets(str, sizeof(str), stdin);
    for(int i=0; str[i]!='\0'; i++)
        count++;
    for(int i = 0, j = count - 2 ;i <= j; i++, j--)
    {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
    printf("Reversed String: %s", str);
    return 0;
}
