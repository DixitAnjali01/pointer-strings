//PROGRAM TO FIND NUMBER OF ALPHABETS DIGITS AND SPECIAL CHARACTERS IN A STRING
#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
gets(a);
int i,n=strlen(a),count_vowels=0,count_consonants=0,count_alphabets=0,count_digits=0,count_specialcharacters=0;
for(i=0;i<n;i++)
{
if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
{
    count_alphabets++;
}
else if((a[i]>=48&&a[i]<=56))
{
    count_digits++;

}
else
{
    count_specialcharacters++;
}
    
}
printf("The number of alphabets are = %d\n",count_alphabets);
printf("The number of digits are = %d\n",count_digits);
printf("The number of special character are = %d\n",count_specialcharacters);
}
