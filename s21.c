//PROGRAM TO REMOVE FIRST OCCURENCE OF A CHARACTER IN A STRING
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b;
    gets(a);
    int n=strlen(a);
    printf("Enter the character for which you want to remove the  first occurence:");
    scanf("%c",&b);
    for(int i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            a[i]=32;
            break;
        }
    }
    printf("The string after removal is = \n %s",a);
}
