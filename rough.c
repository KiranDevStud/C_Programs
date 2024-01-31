#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int mark[3];
    int total;
    float per;
}
s[100];
void display(struct student stud[])
{
    int i=0;
    printf("STUDENT DETAILS\n");
    printf("Name\tRoll_NO\tMark1\tMark2\tMark3\tTotal\tPercentage\n");
    while(i<100)
    {
        if((stud[i].name==NULL)||(stud[i].rollno ==0))
        i=110;
        else{
        stud[i].total=stud[i].mark[0]+stud[i].mark[1]+stud[i].mark[2];
        stud[i].per=(stud[i].total*100)/150;
        printf("%s\t%d\t%d\t%d\t%d\t%d/150\t%f%%\n",stud[i].name,stud[i].rollno,stud[i].mark[0],stud[i].mark[1],stud[i].mark[2],stud[i].total,stud[i].per);
        i++;
        }
        }
}
int main()
{
    int i,n;
    printf("Enter the number of students\n");
    scanf("%d",&n); 
    printf("Enter student details as per the order name,roll no,mark1(50),mark2(50),mark3(50)\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d%d%d",s[i].name,&s[i].rollno,&s[i].mark[0],&s[i].mark[1],&s[i].mark[2]);
        if(i<(n-1))
        printf("Next student\n");
    }
    display(s);
    return 0;
}