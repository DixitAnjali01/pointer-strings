//PROGRAM TO REPLACE  A CHARACTER WITH ANOTHER IN A STRING
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b,c;
    gets(a);
    int n=strlen(a);
    
    printf("Enter the character which you want in replacement of the above character:\n");
    scanf("%c",&c);
    printf("Enter the character  which you want to replace  :");
    scanf("%c",&b);
    for(int i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            a[i]=c;
    
        }
    }
    printf("The string after replacement  is = \n %s",a);
}
