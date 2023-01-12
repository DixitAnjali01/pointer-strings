//PROGRAM TO REMOVE ALL OCCURENCE OF CHARACTER IN A STRING
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b;
    gets(a);
    int n=strlen(a);
    printf("Enter the character for which you want to remove  all the  occurence:");
    scanf("%c",&b);
    for(int i=0;i<n;i++)
    {
        if(a[i]==b)
    
        {
            a[i]=32;
            
        }
    }
    printf("The array after removal is = %s",a);
}
