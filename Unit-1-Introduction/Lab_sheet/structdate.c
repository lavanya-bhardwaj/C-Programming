#include <stdio.h>

struct Date
{
    int day, month, year;
};

struct Date inputDate()
{
    struct Date d;

    printf("Enter day month year: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);

    return d;
}

int main()
{
    struct Date dob, today;
    int age;
    printf("Enter Date of Birth:\n");
    dob = inputDate();
    printf("Enter Current Date:\n");
    today = inputDate();
    age = today.year - dob.year;

    if(today.month < dob.month ||
       (today.month == dob.month && today.day < dob.day))
    {
        age--;
    }

    printf("Age = %d years", age);
    return 0;
}
