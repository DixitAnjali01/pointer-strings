//PROGRAM TO FIND LENGTH OF STRING USING POINTERS
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],*p,count=0;
    gets(str);
    int i=0;
    for(p=str;*p!=NULL;p++)
    {
        count++;
    }
    printf("The length of string is =%d",count);
 return 0;
}