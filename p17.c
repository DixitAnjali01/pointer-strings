//PROGRAM TO RETURN MULTIPLE VALUES FROM A FUNCTION;
#include<stdio.h>
void *areaperi(int l ,int b,int *area,int *peri )
{
    *area=l*b;
    *peri=2*(l+b);
}
int main()
{ 
    int l,b,area,peri;
    scanf("%d%d",&l,&b);
    int *ptr=areaperi(l,b, &area,&peri);
    printf("area=%d",area);
    printf("perimeter=%d",peri);

}