//PROGRAM TO COPY ONE ARRAY TO ANOTHER USING POINTER
#include<stdio.h>
int main()
{
    int a[5],*p,b[5],i;
    
    for(p=a;p<&a[5];p++)
    {
        scanf("%d",p);
    }
    printf("the array before copying is =\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(p=b,i=0;p<&b[4],i<5;p++,i++)
    {
        *p=a[i];
    }
    printf("the array after copying is =\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
    
}
