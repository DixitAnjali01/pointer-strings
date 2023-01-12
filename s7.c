//TOGGLE A STRING
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    gets(a);
    int b=strlen(a);
    printf("the string is = %s\n",a);

    for(int i=0;i<b;i++)
    {
        if((a[i]>=65)&&(a[i]<=90))
        {
            a[i]=a[i]+32;
            continue;
        }
        if((a[i]<=122)&&(a[i]>=97))
        {
            a[i]=a[i]-32;
        }
        
    }
    printf("Now,the string becomes= %s",a);
}