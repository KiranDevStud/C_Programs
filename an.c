struct stud
{
    int rollno;
    char name[20];
    float mark;
};
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    struct stud s[n];
    for(int i=0;i<n;i++)
    {printf("\nenter details of student %d\n",i+1);
        scanf("%d%s%f",&s[i].rollno,&s[i].name,&s[i].mark);
    }
    printf("\ndetails\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%s\t%f\n",s[i].rollno,s[i].name,s[i].mark);
    }
}