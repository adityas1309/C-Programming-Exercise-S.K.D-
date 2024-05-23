#include <stdio.h>
int main()
{
    char line[150];
    int count=0;
    printf("Enter a line of string: ");
    fgets(line, sizeof(line), stdin);
    for(int i=0; line[i]!='\0'; i++)
        count++;
       printf("\nLength of input string: %d",count-1);
    return 0;
}
