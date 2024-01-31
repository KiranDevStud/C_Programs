#include<stdio.h>
int main()
{
  int i,j,n,m,count,ch,ch2,t;
  printf("Enter the number of elements");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("Do you wish to continue. Enter 1 to continue and 0 to terminate");
  scanf("%d",&count);
  while(count==1)
  {
    printf("Enter your choice \n Enter 1 to sort in acending order \n Enter 2 to sort in decending order \n Enter 3 search a number");
    scanf("%d",&ch);
    switch (ch)
    {
      case 1:
      {
        printf("You have selected to sort the array in acending order \n\n The original array\n");
        for ( i = 0 ; i < n ;i++ )
        {
        printf("%d\n",a[i]);
        }
         for ( i = 0 ; i < n ;i++ )
         {
             for ( j = i+1 ; j < n ;j++ )
             {
                 if(a[i]>a[j])
                 {
                         t=a[i];
                         a[i]=a[j];
                         a[j]=t;
                 }

             }
         }
             printf("\nThe array arranged in ascending order is given below \n");
             for (i = 0; i < n;i++)
             printf("%d\n",a[i]);
         
      }
       break;
    case 2:
    {
         printf("You have selected to sort the array in decending order \n The original array\n");
         for(i=0;i<n;i++)
         {
        printf("%d\n",a[i]);
        }
         for ( i = 0 ; i < n ;i++ )
         {
             for ( j = i+1 ; j < n ;j++ )
             {
                 if(a[i]<a[j])
                 {
                         t=a[i];
                         a[i]=a[j];
                         a[j]=t;
                 }

             }
         }
             printf("\nThe array arranged in decending order is given below \n");
             for (i = 0; i < n; i++)
             printf("%d\n",a[i]);
         
      }
       break;
   case 3:
   {
     printf("You have entered to search a number in the array\n\n");
     printf("Enter the number\n");
     scanf("%d",&m);
     for ( i = 0 ; i < n ;i++ )
           if(a[i]==m)
           printf("The entered number %d is present at position %d\n",m,i+1);
   }
    break;
   default:
   printf("INVALId STATEMENT");
     }
      printf("Do you wish to continue. \n Enter 1 to continue and 0 to terminate");
        scanf("%d",&ch2);
        if(ch2==1)
        count=1;
        else count=0; 
  }
}