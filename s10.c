//PROGRAM TO REVERSE A STRING
#include<stdio.h>
#include<string.h>
void main()
{
     char a[100];
     gets(a);
     int n=strlen(a);
     for(int i=n;i>=0;i--)
     {
        printf("%c",a[i]);
     }
    
}