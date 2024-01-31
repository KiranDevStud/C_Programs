#include<stdio.h>
int main()
{
    int n,temp=0,m;
    printf("Enter a number :\n");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        temp=(temp*10)+(n%10);
        n=n/10;
    }
    if(m==temp)
    printf("The number %d is a palindrome number.",m);
    else
    printf("The number %d is not a palindrome number",m);
}