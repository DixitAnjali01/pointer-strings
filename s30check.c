//PROGRAM TO REMOVE FIRST OCCURENCE OF A WORD
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
                    break;
                }
                
                if(j<n2)
                {    
                    continue;
                }
                
            } 
            j=0;        
            
        }
        int m=k+1;
        for(k=(k-n2),m;m<(n1-n2);m++,k++)
        {
            a[k]=a[m];

        }
        printf("The string after the word removal is = %s",a);
}