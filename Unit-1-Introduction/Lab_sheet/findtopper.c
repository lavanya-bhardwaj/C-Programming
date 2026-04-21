#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    char mobile_no[15];
    float CGPA;
    char DoB[15];
    char course[30];
    int year;
};

void input(struct Student *s)
{
    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter mobile number: ");
    scanf("%s", s->mobile_no);

    printf("Enter CGPA: ");
    scanf("%f", &s->CGPA);

    printf("Enter Date of Birth: ");
    scanf("%s", s->DoB);

    printf("Enter course: ");
    scanf("%s", s->course);

    printf("Enter year: ");
    scanf("%d", &s->year);
}

void display(struct Student s)
{
    printf("\nName: %s", s.name);
    printf("\nRoll No: %d", s.roll_no);
    printf("\nMobile No: %s", s.mobile_no);
    printf("\nCGPA: %.2f", s.CGPA);
    printf("\nDoB: %s", s.DoB);
    printf("\nCourse: %s", s.course);
    printf("\nYear: %d\n", s.year);
}

int main()
{
    struct Student s[10];
    int i, topper = 0;

    for(i=0;i<10;i++)
    {
        printf("\nEnter details of student %d\n", i+1);
        input(&s[i]);
    }

    for(i=1;i<10;i++)
    {
        if(s[i].CGPA > s[topper].CGPA)
            topper = i;
    }

    printf("\nTopper of the class:\n");
    display(s[topper]);

    return 0;
}
