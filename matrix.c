#include<stdio.h>
int main()
{
  int i,prod,j,m,n,ch,count,k,ch4;
  char ch1,ch2,ch3;
  printf("Enter the size of matrix 1");
  scanf("%d\n%d",&m,&n);
  int a[m][n],b[m][n],pro[m][n],sum[m][n],trans[m][n];
  printf("\n\n");
  printf("Enter the matrix A\n");
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  scanf("%d",&a[i][j]);
  printf("Enter the matrix B\n");
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  scanf("%d",&b[i][j]);
  printf("\n\n");
  printf("Do you wish to continue. Enter 1 to continue and 0 to terminate");
  scanf("%d",&count);
  while(count==1)
  {
    printf("Enter your choice \n Enter 1 to print product of the two matrix \n Enter 2 to print the sum of the two matrix \n Enter 3 to print the transpose of the matrix");
    scanf("%d",&ch);
    switch (ch)
    {
      case 1:
      {
        printf("You have selected to print the product of the 2 matrix \n\n The original matrix A\n");
    for ( i = 0 ; i < m ;i++ )
    {
      for ( j = 0 ; j < n ;j++ )
      {
        for ( k = 0 ; k < n ; k++ )
        {
          prod = prod + a[i][j]*b[i][j];
        }
 
        pro[i][j] =prod;
        prod = 0;
      }
    }
 
    printf("Product of entered matrices:\n");
 
    for ( i = 0 ; i< m ; i++ )
    {
      for ( j = 0 ; j < n ; j++ )
        printf("%d\t", pro[i][j]);
 
      printf("\n");
    }
       
      }
      break;
    case 2:
    {
     printf("You have selected to print the sum of the 2 matrix \n The original matrix A:\n");
     for(i=0;i<m;i++)
     { 
      for(j=0;j<n;j++)
      { 
       printf("%d ",a[i][j]);
      }
      printf("\n");
     }
     printf("The original matrix B:\n");
     for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
      {
       printf("%d ",b[i][j]);
      }
      printf("\n");
     }
     for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
      {
       sum[i][j]=a[i][j]+b[i][j];
      } 
     }
     printf("The sum of the 2 matrix :\n");
     for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
      {
       printf("%d ",sum[i][j]);
      }
      printf("\n");
     }
    }
    break;
   case 3:
   {
     printf("You have entered to print the transpose of the matrix\n\n");
     printf("Enter 1 to print transpose of matrix A and enter 2 to print transpose of matrix B\n");
     scanf("%d",&ch4);
     for (i = 0; i < m; ++i)
     {
       for (j = 0; j < n; ++j)
       {
         trans[j][i] = a[i][j];
       }   
     }
   
      for (i = 0; i < m; ++i)
     {
        for (j = 0; j < n; ++j)
       {
         trans[j][i] = b[i][j];
       }
     }
     if(ch4==1)
     {
       printf("The original matrix : \n");
       for(i=0;i<m;i++)
       {
         for(j=0;j<n;j++)
         {
           printf("%d ",a[i][j]);
         }
         printf("\n");
       }
       printf("\nTranspose of the matrix A:\n");
       for (i = 0; i < m; ++i)
       {
         for (j = 0; j < n; ++j)
         {
           printf("%d  ",trans[i][j]);
           if (j == n - 1)
           printf("\n");
         }
       }
     }
     else
     {
        printf("The original matrix : \n");
       for(i=0;i<m;i++)
       {
         for(j=0;j<n;j++)
         {
           printf("%d ",b[i][j]);
         }
         printf("\n");
       }
       printf("\nTranspose of the matrix B:\n");
       for (i = 0; i < m; ++i)
       {
         for (j = 0; j < n; ++j)
         {
           printf("%d  ", trans[i][j]);
           if (j == n - 1)
           printf("\n");
         } 
       }
     }
   }
     break;
   default:
   printf("INVALId STATEMENT");
     }
      printf("Do you wish to continue. \n Enter 1 to continue and 0 to terminate");
        scanf("%d",&ch4);
        if(ch4==1)
        count=1;
        else count=0; 
  }
 return 0;
 }     
 