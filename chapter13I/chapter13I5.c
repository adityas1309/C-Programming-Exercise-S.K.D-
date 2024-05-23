#include<stdio.h>
#include<ctype.h>

char encode(char c)
{
  if (isalpha(c))
  {
    if (islower(c))
      return (c - 'a' + 2) % 26 + 'a';
    else
      return (c - 'A' + 2) % 26 + 'A';
  }
  else
    return c;
}

char decode(char c)
{
  if (isalpha(c))
  {
    if (islower(c))
      return (c - 'a' - 2 + 26) % 26 + 'a';

    else
      return (c - 'A' - 2 + 26) % 26 + 'A';
  }
  else
    return c;
}

int main()
{
  char message[100];
  char encoded_message[100];
  char decoded_message[100];
  printf("Enter a message: ");
  fgets(message, 100, stdin);
  message[strcspn(message, "\n")] = '\0';
  for (int i = 0; message[i] != '\0'; i++)
    encoded_message[i] = encode(message[i]);
  for (int i = 0; encoded_message[i] != '\0'; i++)
    decoded_message[i] = decode(encoded_message[i]);
  printf("Original message: %s\n", message);
  printf("Encoded message: %s\n", encoded_message);
  printf("Decoded message: %s\n", decoded_message);
  return 0;
}
