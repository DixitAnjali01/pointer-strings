//PROGRAM TO SWAP TWO ARRAYS USING POINTERS
#include<stdio.h>
int main()
{
    int a[5],*p,b[5],i,c[5];
    
    for(p=a;p<&a[5];p++)
    {
        scanf("%d",p);
    }
    printf("the array 'a' before swapping is =\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    for(p=b;p<&b[5];p++)
    {
        scanf("%d",p);
    }
    printf("the array 'b' before swapping is =\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    for(p=c,i=0;p<&c[5],i<5;p++,i++)
    {
        *p=a[i];
    }
    for(p=a,i=0;p<&a[5],i<5;p++,i++)
    {
        *p=b[i];
    }
    for(p=b,i=0;p<&b[5],i<5;p++,i++)
    {
        *p=c[i];
    }
    printf("the array 'a' after swapping is =\n");
    
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("the array 'b' after swapping is =\n");
    
    for(i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    

    







}

