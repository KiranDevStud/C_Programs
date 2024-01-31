#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    int mark[3];
    int sum;
    double perc;
}s[3];

void display(struct student stud[],int m)
{
    printf("STUDENT DETAILS\n");
    printf("Name\tRoll No\tMark1\tMark2\tMark3\tTotal\tPercentage\n");
    for(int i=0;i<m;i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\t%d\t%lf\n",stud[i].name,stud[i].rollno,stud[i].mark[0],stud[i].mark[1],stud[i].mark[2],stud[i].sum,stud[i].perc);
    }
}
main()
{
    int i,j,n;
    printf("Enter the number of students");
    scanf("%d",&n);
    printf("Enter student details\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d%d%d",&s[i].name,&s[i].rollno,&s[i].mark[0],&s[i].mark[1],&s[i].mark[2]);
    }
    for(j=0;j<n;j++)
    {
        s[j].sum=s[j].mark[0]+s[j].mark[1]+s[j].mark[2];
        s[j].perc=(s[j].sum /150)*100;
    }
    display(s,n);
}