//PROGRAM TO SEARCH ALL OCCURENCE OF WORD IN A STRING
#include<stdio.h>
#include<string.h>
void main()
{
       char a[100],b[100];
       gets(a);
       gets(b);
       int n1=strlen(a),n2=strlen(b),j=0,flag=0,k=0;

       for(int i=0;i<n1;i++)
       {
            if((a[i]==b[j])&&(a[j+1]==32))
            {
                j++;
            
                
                if(j==n2)
                {
                   flag++;
                   break;
                    
                }
                
                if(j<n2)
                {    
                    continue;
                }
                
            } 
            j=0;        
            
        }
        if(flag==1)
    {
    printf("%s occurs ",b);
    }
    else{
        printf("%s do not occurs",b);
    }




}