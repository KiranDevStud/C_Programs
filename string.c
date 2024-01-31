#include<stdio.h>
#include<string.h>
main()
{
    char st1[100],st2[100],st3[4];
    int comp,l,l1,l2;
    printf("Enter the string 1\n");
    gets(st1);
    l1=strlen(st1);
    printf("Enter the string 2\n");
    gets(st2);
    l2=strlen(st2);
    printf("First string\n");
    puts(st1);
    printf("Second string\n");
    puts(st2);
    comp=strcmp(st1,st2);
    if(comp!=0)
    {
        if(l2>l1)
        {
            strcat(st2,st1);
            printf("The concatenated string : %s\n", st2);
            l=strlen(st2);
            printf("Length of the concatinated string= %d\n",l);
            for(int i=0;i<4;i++)
            {
                st3[i]=st2[i];
                printf("%c ",st3[i]);
            }
        }
        else{
                strcat(st1,st2);
                printf("The concatenated string : %s\n", st1);
                l=strlen(st1);
                printf("Length of the concatinated string= %d\n",l);
                printf("The new string with\n");
                 for(int i=0;i<4;i++)
                 {
                   st3[i]=st1[i];
                   printf("%c ",st3[i]);
                   }
            }
    }
    return 0;
}