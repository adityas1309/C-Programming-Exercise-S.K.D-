#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    FILE *collegeFile;
    char word[100];
    int aec_count = 0;
    collegeFile = fopen("College.txt", "r");
    if (collegeFile == NULL) {
        printf("Error opening College.txt!\n");
        return 1;
    }
    printf("Searching for the word \"AEC\" in College.txt...\n");
    while (fscanf(collegeFile, "%s", word) != EOF)
    {
        for (int i = 0; word[i] != '\0'; i++)
            word[i] = tolower(word[i]);
        if (strcmp(word, "aec") == 0)
            aec_count++;
    }

    if (aec_count > 0)
        printf("The word \"AEC\" appears %d times in College.txt.\n", aec_count);
    else
        printf("The word \"AEC\" is not found in College.txt.\n");
    fclose(collegeFile);
    return 0;
}
