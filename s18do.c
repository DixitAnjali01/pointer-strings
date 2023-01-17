//PROGRAM TO FIND HIGHEST FREQUENCY CHARACTER IN A STRING
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    gets(a);
    int b[200]={0},i,n=strlen(a),c=0,j=0;
    for(i=0;i<n;i++)
    {
        b[a[i]-97]++;
    }
    c=sizeof(b);
    for(i=0;i<c-1;i++)
    {
        if(b[i]<b[i+1])
        {
            j=i;
        }
    }
    printf("The character with highest frequency is: %c",j);



}