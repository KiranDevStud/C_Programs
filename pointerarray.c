#include <stdio.h>
main()
{
    char *name;
    int length;
    name= "DELHI";
    char *cptr=name;
    printf("%s\n",name);
    while(*cptr!='\0')
    {
        printf("%c is stored at address %d\n",*cptr,cptr);
        cptr++;
    }
    length=cptr - name;
    printf("\nLength of the string =%d\n",length);
}