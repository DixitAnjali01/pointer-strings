//PROGRAM TO FIND ALL OCCURENCE OF THE WORD
#include<stdio.h>
#include<string.h>
void main()
{
       char a[100],b[100];
       gets(a);
       gets(b);
       int n1=strlen(a),n2=strlen(b),j=0,count=0,k=0;

       for(int i=0;i<n1;i++)
       {
            if(a[i]==b[j])
            {
                j++;
            
                
                if(j==n2)
                {
                    j=0;
                    count++;
                    
                }
                
                if(j<n2)
                {    
                    continue;
                }
                
            } 
            j=0;        
            
        }
    printf("%s occurs %d times",b,count);




}