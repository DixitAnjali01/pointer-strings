//PROGRAM TO REVERSE AN ARRAY USING POINTER
#include<stdio.h>
int main()
{
    int a[5],*p,i;
    for(p=a;p<&a[5];p++)
    {
        scanf("%d",p);
    }
     printf("The  array before reversing  is =\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
    }
   printf("The reversed array is :");
    for(p=&a[4];p>=&a[0];p--)
    {
        printf("%d",*p);
    }
    printf("\n");
    
}