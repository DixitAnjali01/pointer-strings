//PROGRAM TO FIND LAST OCCURENCE OF A WORD IN GIVEN STRING
#include<stdio.h>
#include<string.h>
void main()
{
       char a[100],b[100];
       gets(a);
       gets(b);
       int n1=strlen(a),n2=strlen(b),j=0,k;

       for(int i=0;i<n1;i++)
       {
            if(a[i]==b[j])
            {
                j++;
            
                
                if(j==n2)
                {
                    k=i;
                    
                }
                
                if(j<n2)
                {    
                    continue;
                }
                
            } 
            j=0;        
            
        }
    printf("The word lastly occurefd from  index %d to  ends at %d ",k-(n2-1),k);





}