#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,root1,root2,i,r,dis;
    printf("Enter the coefficients of the quadratic equation: \n");
    scanf("%lf%lf%lf",&a,&b,&c);
    dis=b*b-4*a*c;
    if(dis>0)
    {
        root1=-b+sqrt(dis)/(2*a);
        root2=-b-sqrt(dis)/(2*a);
        printf("\nThe roots are real and Root1= %lf and Root2= %lf",root1,root2);
    }
    else if(dis==0)
    {
        root1=-b/(2*a);
        printf("\nRoot1 and Root2 are same.\nRoot1=Root2=%lf",root1);
    }
    else
    {
        r=-b/(2*a);
        i=sqrt(-dis)/(2*a);
        printf("Roots are imaginary:\n");
        printf("Root1= %lf+%lfi Root2= %lf-%lf",r,i,r,i);
    }
}