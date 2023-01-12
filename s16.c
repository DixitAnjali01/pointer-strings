//PROGRAM TO SEACRCH ALL OCCURENCE OF A CHARACTER IN A STRING
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b;
    gets(a);
    int n=strlen(a),k[20];
    printf("Enter the character for which you want to find the   occurence:");
    scanf("%c",&b);
    int j=0,c,flag=0;
    for(int i=0;i<n;i++)
    { 
        
        if(a[i]==b)
    
        {
            k[j]=i;
            j++;
        }
    }
    printf("Eter the index at whixh you want to check the occurence :");
    scanf("%d",&c);
    for(int i=0;i<j;i++)
    {
        if(k[i]==c)
        {
            flag++;
            break;
        }
    }
    if(flag==1)
    {
        printf("element is present at the given index");
    }
    else
    {
        printf("element is not present at the given index");
    }
}