//PROGRAM TO INPUT AND PRINT ARRAY ELEMENTS USING POINTERS
#include<stdio.h>
int main()
{
    int a[5],*p;
    
    for(p=a;p<&a[4];p++)
    {
        scanf("%d",p);
    }
    for(p=a;p<&a[4];p++)
    {
        printf("%d ",*p);
    }
    
}