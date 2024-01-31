#include<stdio.h>
int main()
{
    int n,max;
    printf("Enter array size\n");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[0]=max;
    printf("\nArray:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
    }
    printf("\nNew array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}