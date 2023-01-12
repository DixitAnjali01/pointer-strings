//PROGRAM TO FIND LENGTH OF A STRING
#include<stdio.h>
void main()
{
    char a[100];
    gets(a);
    int i,count=0;
    for(i=0;a[i];i++)
    {
        count++;
    }
    printf("the lenghth of the string is = %d",count);
}