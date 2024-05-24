#include <stdio.h>
#include <string.h>

struct DateOfBirth {
    int dd;
    int mm;
    int yyyy;
};

struct Student {
    char name[50];
    int roll;
    struct DateOfBirth dob;
};

int main() {
    struct Student student;

    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &student.roll);

    printf("Enter Date of Birth [DD MM YYYY] format: ");
    scanf("%d %d %d", &student.dob.dd, &student.dob.mm, &student.dob.yyyy);

    printf("\nName : %s", student.name);
    printf("\nRollNo : %d\n", student.roll);
    printf("Date of birth : %d/%d/%d\n", student.dob.dd, student.dob.mm, student.dob.yyyy);

    return 0;
}
