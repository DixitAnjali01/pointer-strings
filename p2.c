//PROGRAM TO SWAP TWO NUMBERS USING POINTERS
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the numbers = ");
    scanf("%d %d",&n1,&n2);
     printf("Numbers before swapping are = %d %d\n",n1,n2);
   
    int *p1=&n1,*p2=&n2,temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("Numbers after swapping are =%d %d  \n",n1,n2);
    
}