#include <stdio.h>
#include <string.h>
void convertOpposite(char* str)
{
	int ln = strlen(str);
	for (int i = 0; i < ln; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
}
int main()
{
	char str[150];
    int count=0;
    printf("Enter a line of string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    convertOpposite(str);
    printf("%s", str);
	return 0;
}
