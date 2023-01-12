//PROGRAM TO COMPARE TWO STRINGS
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int c,d,flag=0;
    gets(a);
    gets(b);
    c=strlen(a);   //let two strings are of equal length
    for(int i=0;i<c;i++)
    {
        if(a[i]!=b[i])
        {
            flag++;
            break;
        }
    }
    if(flag==1)
    {
        printf("The strings are not equal");
    }
    else
    printf("The strings are equal");
    
    



}