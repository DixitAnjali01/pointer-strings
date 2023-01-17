//PROGRAM TO REVERSE ORDER OF WORDS IN THE GIVEN STRING
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100],c[100];
    gets(a);
    int n=strlen(a);
    int n2,i,j,k=n2;
    n2=0;
    for(i=n,j=0;i>=0;i--,j++)
    {
        b[j]=a[i];
        if(a[i]==32)
        {
        int n1;
        n1=strlen(b);
        for(j=n1,k=n2;b[j];j--,k++)
        {
                c[k]=b[j];
                n2=k;
        }
        c[k]=32;
        n2++;
            
        }
    }
    printf("%s",c);
}