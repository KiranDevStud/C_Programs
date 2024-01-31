#include<stdio.h>
int main()
{
    int r,c,i,j,k;
    printf("Enter row and column size:\n");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],mul[r][c];
    printf("Enter elements of first matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            {
                mul[i][j]=0;
                for(k=0;k<c;k++)
                {
                    mul[i][j]+=a[i][k]*b[k][j];
                }
            }
    }
    printf("Multiplication of two matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
}