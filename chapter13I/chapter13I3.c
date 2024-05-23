#include <stdio.h>

int compare_strings(char *str1, char *str2)
{
    int are_equal = 1;
    int len1 = 0, len2 = 0;
    while (*str1 != '\0')
    {
        len1++;
        str1++;
    }
    str1 = str1 - len1;
    while (*str2 != '\0')
    {
        len2++;
        str2++;
    }
    str2 = str2 - len2;
    if (len1 != len2)
        are_equal = 0;
    else
    {
        while (*str1 != '\0' && *str2 != '\0')
        {
            if (*str1 != *str2) {
                are_equal = 0;
                break;
            }
            str1++;
            str2++;
        }
    }

    return are_equal;
}

int main() {
    char str1[100], str2[100];
    printf("Input the 1st string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Input the 2nd string: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    int result = compare_strings(str1, str2);
    if (result)
        printf("The length of both strings are equal and also both strings are equal.\n");
    else
        printf("The strings are not equal.\n");
    return 0;
}
