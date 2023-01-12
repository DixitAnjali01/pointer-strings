//PROGRAM TO ADD TWO NUMBERS USING POINTERS
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the numbers = ");
    scanf("%d %d",&n1,&n2);
    int *p1=&n1,*p2=&n2,sum;
    sum=*p1+*p2;
    printf("%d",sum);
    return 0;
}
