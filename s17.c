////PROGRAM TO COUNT OCCURENCE OF THE CHARACTER
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b;
    gets(a);
    int n=strlen(a),count=0;
    printf("Enter the character for which you want to count occurence:");
    scanf("%c",&b);
    for(int i=0;i<n;i++)
    {
        if(a[i]==b)
    
        {
            count++;
        }
    }
    printf("The character %c occures %d times",b,count);
}
