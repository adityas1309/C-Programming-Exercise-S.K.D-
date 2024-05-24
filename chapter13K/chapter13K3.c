#include <stdio.h>

int main() {
    FILE *computerFile, *scienceFile, *mergedFile;
    computerFile = fopen("computer.txt", "r");
    if (computerFile == NULL)
    {
        printf("Error opening computer.txt!\n");
        return 1;
    }
    scienceFile = fopen("Science.txt", "r");
    if (scienceFile == NULL)
    {
        printf("Error opening Science.txt!\n");
        fclose(computerFile);
        return 1;
    }
    mergedFile = fopen("ComputerScience.txt", "w");
    if (mergedFile == NULL)
    {
        printf("Error creating ComputerScience.txt!\n");
        fclose(computerFile);
        fclose(scienceFile);
        return 1;
    }
    char ch;
    while ((ch = fgetc(computerFile)) != EOF)
          fputc(ch, mergedFile);
    ch = fgetc(computerFile);
    if (ch != EOF)
        ungetc(ch, computerFile);
    while ((ch = fgetc(scienceFile)) != EOF)
        fputc(ch, mergedFile);
    printf("Files merged successfully!\n");
    fclose(computerFile);
    fclose(scienceFile);
    fclose(mergedFile);
    return 0;
}
