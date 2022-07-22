/*#include<stdio.h>
#include<string.h>
int main()
{
    int i, Vcount=0,Ccount=0,len;
    char mystring[20]
    printf("enter string");
    gets('mystring[20]');
    len= strlen(mystring);
    for(i=0;i<len;i++)
    {
        if(mystring[i]=='a'||'e'||'i'||'o'||'u')
        {
            Vcount++;
        }
        else{
            Ccount++;
        }
        printf("number of vowel :%d \n", Vcount);
        printf("number of consonant: %d",Ccount);
        return 0;
    }
}*/
#include <stdio.h>
#include<string.h>
int main()
{
  int c = 0, count = 0;
  char s[1000];

  printf("Input a string\n");
  gets(s);

  while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count++;
    c++;
  }

  printf("Number of vowels in the string: %d", count);

  return 0;
}