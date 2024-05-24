#include <stdio.h>

struct DateOfBirth {
    int dd;
    int mm;
    int yyyy;
};

int calculateAge(struct DateOfBirth dob1, struct DateOfBirth dob2)
{
    int years = dob2.yyyy - dob1.yyyy;
    if (dob2.mm < dob1.mm)
        years--;
    else if (dob2.mm == dob1.mm && dob2.dd < dob1.dd)
        years--;
    int months = dob2.mm - dob1.mm;
    if (months < 0)
        months += 12;
    int days = dob2.dd - dob1.dd;
    if (days < 0)
    {
        months--;
        days += 30;
    }

    printf("Age is : %d Years %d Month %d days.\n", years, months, days);
    return years;
}

int main() {
    struct DateOfBirth dob1, dob2;

    printf("Enter Date of Birth 1 [DD MM YYYY] format: ");
    scanf("%d %d %d", &dob1.dd, &dob1.mm, &dob1.yyyy);

    printf("Enter Date of Birth 2 [DD MM YYYY] format: ");
    scanf("%d %d %d", &dob2.dd, &dob2.mm, &dob2.yyyy);

    calculateAge(dob1, dob2);

    return 0;
}
