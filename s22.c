//PROGRAM TO REMOVE THE LAST OCCURENCE OF THE CHARACTER
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b;
    gets(a);
    int n=strlen(a),k;
    printf("Enter the character for which you want to remove  the  last occurence:");
    scanf("%c",&b);
    for(int i=0;i<n;i++)
    {
        if(a[i]==b)
    
        {
            k=i;
            
        }
    }
    a[k]=32;
    printf("The array after removal is = %s",a);
}
