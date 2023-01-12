//PROGRAM TO CHECK WHTHER A STRING IS PALINDROME OR NOT
#include<stdio.h>
#include<string.h>
void main()
{
 char a[100],b[100];
     gets(a);
     int n=strlen(a),flag=0;
     
     for(int i=n,j=0;i>=0;i--,j++)
     {
        b[j]=a[i];
     }
     for(int i=0;i>=0;i--,i++)
     {
        if (b[i]!=a[i])
        {
            flag++;
            break;
        }
     }
     if(flag==1)
     {
        printf("not a palindrome");

     }
     else{
        printf("palindrome");
     }
     
}   