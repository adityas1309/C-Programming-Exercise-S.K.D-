#include <stdio.h>
int main()
{
  struct student
  {
    int id;
    char name[50];
    float percentage;
  };
  struct student student1;
  student1.id = 25;
  strcpy(student1.name, "Babai");
  student1.percentage = 89.67;
  printf("ID: %d\n", student1.id);
  printf("Name: %s\n", student1.name);
  printf("Percentage: %.2f\n", student1.percentage);
  return 0;
}
