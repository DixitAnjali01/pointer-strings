//PROGRAM TO CONCATENATE TWO STRINGS
#include<stdio.h>
#include<string.h>
void main()
{
    char a[8],b[4],c,d;
    gets(a);
    gets(b);
    c=strlen(a);
    d=strlen(b);
    d++;
    for(int i=c,j=0;j<d;i++,j++)
    {
        a[i]=b[j];
    }
    printf("%s",a);
    
}