#include<stdio.h>
int main()
{
    int n,temp,rev=0;
    printf("Enter a number");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rev=(rev*10)+n%10;
        n=n/10;
    }
if(rev==temp)
printf("It is a palindrome number");
else 
printf("It is not Aa palindrome number");
return 0;
}