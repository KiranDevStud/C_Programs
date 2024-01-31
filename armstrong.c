#include<stdio.h>
int main()
{
    int n,i,sum=0,m;
    printf("Enter a number\n");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        i=n%10;
    sum=sum+(i*i*i);
    n=n/10;
    }
    if(sum==m)
    printf("The number %d is an armstrong numner\n",m);
    else
    printf("The number %d is not an armstrong number\n",m);
}