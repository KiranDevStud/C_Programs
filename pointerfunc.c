#include<stdio.h>
void swap(int *,int *);
main()
{
    int a,b;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
printf("Numbers before swapping : a=%d   b=%d\n",a,b);
swap(&a,&b);
printf("Numbers after swapping : a=%d   b=%d\n",a,b);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}