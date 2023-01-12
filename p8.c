//PROGRAM TO ACCESS TWO DIMENSIONAL ARRAY USING POINTER
#include<stdio.h>
int main()
{
    int a[2][3],i,j,*p;
   // for(i=0;i<2;i++)
   // {
   //     for(j=0;j<3;j++)
   //     {
    //        scanf("%d",&a[i][j]);
    //    }
    //}
    for(p=*a;p<=&a[1][2];p++)
    {
        scanf("%d",p);
    }
    
    for(p=*a;p<=&a[1][2];p++)
    {
        printf("%d ",*p);
        if(p==&a[0][2])
        {
            printf("\n");
        }
    }

}