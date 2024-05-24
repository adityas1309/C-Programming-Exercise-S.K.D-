#include <stdio.h>
struct student {
  int id;
  char name[50];
  float percentage;
};

struct student Input() {
  struct student temp;
  printf("Enter ID: ");
  scanf("%d", &temp.id);
  printf("Enter name: ");
  scanf(" %[^\n]%*c", temp.name);
  printf("Enter percentage: ");
  scanf("%f", &temp.percentage);
  return temp;
}

void Output(struct student student) {
  printf("\nID: %d\n", student.id);
  printf("Name: %s\n", student.name);
  printf("Percentage: %.2f\n", student.percentage);
}

int main() {
  struct student studentInfo = Input();
  Output(studentInfo);
  return 0;
}
