#include <stdio.h>
struct student
{
    char name[100];
    int marks;
    int roll;
};
int main()
{
    struct student s[10];
    int size,i;
    printf ("\n enter the size = ");
    scanf ("%d",&size);
    for (i=0;i<size;i++)
    {
        printf ("\n enter the details of students %d",i+1);
        printf ("\n name = ");
        scanf ("%s",&s[i].name);
        printf ("\n roll no. = ");
        scanf ("%d",&s[i].roll);
        printf ("\n marks = ");
        scanf ("%d",&s[i].marks);
    }
    printf ("\n name \t roll no. \t marks");
    for (i=0;i<size;i++)
    {
        printf ("\n %s \t %d \t\t %d",s[i].name,s[i].roll,s[i].marks);
    }
    return 0;
}
