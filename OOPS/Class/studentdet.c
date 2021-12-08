#include<stdio.h>


struct student
{
    char name[50];
    int age;
    int sem;
    float cgpa;
}s[60];


int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("NAME:");
        scanf("%s",s[i].name);
        flush();
        printf("AGE: ");
        scanf("%d",&s[i].age);
        printf("SEMESTER: ");
        scanf("%d",&s[i].sem);
        printf("CGPA: ");
        scanf("%.2f",&s[i].cgpa);
    }
    for(i=0 ; i<5 ; i++)
    {
        printf("DETAILS OF STUDENT %d:\n",(i+1));
        printf("NAME: ");
        printf("%s",s[i].name);
        printf("AGE: ");
        printf("%d",s[i].age);
        printf("SEMESTER: ");
        printf("%d",s[i].sem);
        printf("CGPA: ");
        printf("%.2f",s[i].cgpa);
    }
    return 0;
}  
