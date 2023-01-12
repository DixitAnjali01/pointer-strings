//PROGRAM TO FIND FIRST OCCURENCE OF A CHARACTER IN STRING
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b;
    gets(a);
    int n=strlen(a);
    printf("Enter the character for which you want to find the  first occurence:");
    scanf("%c",&b);
    for(int i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            printf("the %c firstly occured at  index %d ",b,i);
            break;
        }
    }
}
