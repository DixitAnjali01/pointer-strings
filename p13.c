//PROGRAM TO COPY ONE STRING TO ANOTHER USING POINTER
#include<stdio.h>
#include<string.h>
void main()
{
char str[10],*p,*q;
gets(str);

p=str;
printf("The string before copying is = %s",p);

q=p;
printf("The string after copying is = %s",q);
  


}
