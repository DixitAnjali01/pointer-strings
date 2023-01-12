//PROGRAM TO SORT AN ARRAY USING POINTERS
#include<stdio.h>
int main()
{   
    int a[5]={6,5,9,8,5},*p;
    for(int i=0;i<5-1;i++)
    {
    for( p=&a[0];p<&a[5];p++)
    {
        if (*p>*(p+1))
        {
            int temp;
            temp=*p;
            *p=*(p+1);
            *(p+1)=temp;
        }
    }
    }
    printf("array in ascending order is =\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    for(int i=0;i<5-1;i++)
    {
    for( p=&a[0];p<&a[5];p++)
    {
        if (*p<*(p+1))
        {
            int temp;
            temp=*p;
            *p=*(p+1);
            *(p+1)=temp;
        }
    }
    printf("\n");
    }
     printf("array in descending order is =\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}  
