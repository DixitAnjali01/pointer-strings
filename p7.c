//PROGRAM TO SEARCH AN ELEMENT IN ARRAY USING POINTER
#include<stdio.h>
int main()
{
    int a[5],i,b,flag=0,*p;
    p=a;
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search for:");
    scanf("%d",&b);
    for(i=0;i<5;i++)
    {
        if(*(p+i)==b)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d found at %d",b,i);

    }
    else
    printf("Element not found");
}