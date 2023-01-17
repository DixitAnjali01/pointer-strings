//PROGRAM TO CALCULATE TOTAL NUMBER OF VOWELS AND CONSONANTS IN THE STRING
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    gets(a);
    int i,n=strlen(a),count_vowels=0,count_consonants=0;
    for(i=0;i<n;i++)
    {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='O'||a[i]=='I'||a[i]=='U')
    {
        count_vowels++;
    }
    else
    {
        if(a[i]!=32)
        {
            count_consonants++;
        }
    }
   
    }
    printf("The number of vowels is = %d\n",count_vowels);
    printf("The number of consonants is =%d",count_consonants);



}
