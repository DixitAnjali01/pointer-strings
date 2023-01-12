//  PROGRAM TO COMPARE TWO STRINGS USING POINTERS
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],*p,*q;
    int c=1;
    gets(a);
    gets(b);
    int i=0;
    for(p=a,q=b;a[i];p++,q++,i++)
    {
        if(*p!=*q)
        {   c=0;
            printf("the two strings are not equal:)");
            break;
        }
    }
    if (c==1)
    {
        printf("The two strings are equal");
    }



}