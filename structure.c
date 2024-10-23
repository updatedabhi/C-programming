#include <stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
};

struct student s;

int main()
{
    struct student *ptr = &s;
    printf("Enter the information of student\n");
    scanf("%d", &s.roll_no);
    // printf("Your roll no is %d", ptr -> roll_no);
    printf("Your roll no is %d", (*ptr).roll_no);
    // struct student s[5];
    // printf("Enter the information of studetns\n");
    // for (int i = 0; i < 5 ; i++)
    // {
    //     printf("Enter the roll, name and marks of %d student\n", i + 1);
    //     scanf("%d %s %f", &s[i].roll_no, &s[i].name, &s[i].marks);
    // }
    // for (int i = 0; i < 5 ; i++)
    // {
    //     printf("The information of %d student %d %s %f\n", i + 1, s[i].roll_no, s[i].name, s[i].marks);
    // }
    

    // struct student s = {45, "Abhishek", 56.45};
    // struct student s1;
    // printf("Enter the student information\n");
    // scanf("%d", &s1.roll_no);
    // scanf("%s", &s1.name);
    // scanf("%f", &s1.marks);
    // printf("student roll no is %d\n", s1.roll_no);
    // printf("student name is %s\n", s1.name);
    // printf("student marks is %f\n", s1.marks);
    // if (s1.roll_no > s.roll_no)
    // {
    //     printf("Your are awesome");
    // }
    
    // s1 = s;
    // printf("%d", s1.roll_no);
    // printf("student's name %s\n", s.name);
    // printf("student roll no %d\n", s.roll_no);
    // printf("student marks %f", s.marks);

    return 0;
}