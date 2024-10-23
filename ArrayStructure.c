#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct student s[30];
    int size;
    printf("Enter the size of student table\n");
    scanf("%d", &size);
    printf("Enter the details of student\n");
    for (int i = 0; i < size; i++)
    {
        printf("Entered the details %d studetn", i + 1);
        scanf("%d%s%f", &s[i].roll, &s[i].name, &s[i].marks);
    }
    printf("Your entered details are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d %s %f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}