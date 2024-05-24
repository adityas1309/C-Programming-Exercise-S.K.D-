#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
  FILE *fp_in, *fp_out;
  int vowels = 0, consonants = 0, digits = 0;
  char ch;
  fp_in = fopen("Knowledge.txt", "r");
  if (fp_in == NULL)
  {
    printf("Error: Could not open file 'Knowledge.txt' for reading.\n");
    return 1;
  }
  fp_out = fopen("result.txt", "w");
  if (fp_out == NULL)
  {
    printf("Error: Could not open file 'result.txt' for writing.\n");
    fclose(fp_in);
    return 1;
  }
  while ((ch = fgetc(fp_in)) != EOF)
  {
    if (isalpha(ch))
    {
      ch = tolower(ch);
      if (strchr("aeiou", ch) != NULL)
        vowels++;
      else
        consonants++;
    }
    else if (isdigit(ch))
      digits++;
  }
  fprintf(fp_out, "Vowels: %d\n", vowels);
  fprintf(fp_out, "Consonants: %d\n", consonants);
  fprintf(fp_out, "Digits: %d\n", digits);
  fclose(fp_in);
  fclose(fp_out);
  printf("Results written to 'result.txt'.\n");
  return 0;
}
