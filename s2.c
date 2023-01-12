//PROGRAM TO COPY ONE STRING TO ANOTHER
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    gets(a);
    int i,n;
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("After copying the elements:");
    printf("%s",b);

    
}