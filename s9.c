//PROGRAM TO FIND TOTAL NO. OF WORDS IN A STRING
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[200];
    gets(a);
    int n,i,count =0;
    n=strlen(a);
    for( i=0;i<n;i++)
    {
        if(a[i]==32)
        {
            count++;
        }
    }
    count++;
    printf("The number of words are = %d",count);

}