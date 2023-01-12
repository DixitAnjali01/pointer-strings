//PROGRAM TO REVERSE A STRING USING POINTER
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],*p,*q,b;
    
    gets(a);
    b=strlen(a);
    p=a;
    q=p;
    for(int i=b;i>=0;i--)
    {
        printf("%c",*(q+i));
    }


}