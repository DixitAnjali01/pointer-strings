//PROGRAM TO CONCATENATE TWO STRING USING POINTERS
#include<stdio.h>
#include<string.h>
void main()
{
    char a[8],b[4],*p,*q,c,d;
    gets(a);
    printf("before concatenation 'a' is = %s\n",a);
    gets(b);
    printf("before concatenation 'b' is = %s\n",b);
    c=strlen(a);
    d=strlen(b);
    d++;
    int i=0;
    for(p=&a[c],q=b,i=0;i<d;i++,p++,q++)
    {
        *p=*q;
    }
    printf("After concatenation 'a' is = %s",a);
    
   
}