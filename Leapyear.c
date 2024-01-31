//c program to check whether a given year is leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d",&year);
    if(year%4==0||year%400==0)
    printf("\n%d is a leap year.\n",year);
    else
    printf("\n%d is not a leap year.\n",year);
}