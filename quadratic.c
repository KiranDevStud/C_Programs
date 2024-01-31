#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r,i,root1,root2,dis;
    printf("Enter the cofficents:\n");
    scanf("%f%f%f",&a,&b,&c);
    dis=b*b-4*a*c;
    if(dis>0)
    {
        root1=-b+sqrt(dis)/(2*a);
        root2=-b-sqrt(dis)/(2*a);
        printf("\nThe roots are real and distinct\n");
        printf("\nRoot1= %f and Root2=%f,root1,root2");
    }
    else if(dis==0)
    {
        root1=root2=-b/2*a;
        printf("\nRoot1=Root2=%f",root1);
    }
    else{
        r=-b/(2*a);
        i=sqrt(-dis)/(2*a);
        printf("\nThe roots are imaginary\n");
        printf("\nRoot1=%f+i%f and Root2=%f-i%f",r,i,r,i);
    }
    return 0;
}