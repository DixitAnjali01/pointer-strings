//PROGRAM TO REVERSE AN ARRAY USING POINTER
#include<stdio.h>
int main()
{
    int a[5],*p,i,b[5];
    for(p=a;p<&a[5];p++)
    {
        scanf("%d",p);
    }
     printf("The  array before reversing  is =\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(p=b,i=4;i>=0;p++,i--)
    {
        *p=a[i];
    }
   
    for(p=a,i=0;i<5;i++,p++)
    {
        *p=b[i];
    }
    printf("THE REVERSED ARRAY IS \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    
}