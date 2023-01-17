//ANAGRAM
#include <stdio.h>

int main()
{
   char s1[6];
   char s2[6];
   int c=0;
   
   scanf("%s",s1);
   scanf("%s",s2);
   int a[26]={0};
   int b[26]={0};
   
   for(int i=0;s1[i];i++)
   {
       a[s1[i]-65]++;
   }
   
   for(int i=0;s2[i];i++)
   {
       b[s2[i]-65]++;
   }
  
   for(int i=0;i<26;i++)
   {
       if(a[i]!=b[i])
       {c=1;
       break;
       }
   }
   
   if(c==0)
   printf("anagram");
   if(c==1)
   printf("not anagram");
   return 0;
}