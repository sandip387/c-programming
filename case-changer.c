// #include<stdio.h>
// void conversion(char *);
//  int main()
//  {
//     char ch;
//     printf("enter character of choice");
//     scanf("%c",&ch);
//     conversion(&ch);
//     printf("\n The corresponding character is : %c", ch);
//     getch();
// }
// void conversion(char *ch){
//     if (*ch>=97 && *ch<=122)
//     {
//     *ch = *ch-32;
//     }
//     else if (*ch>=65 && *ch<=90)
//     {
//     *ch = *ch+32;
//     }
    
    
// }
#include <stdio.h>
#include <string.h>
void upper_string(char[]);
void lower_string(char[]);

int main()
{
   char string[100];
   
   printf("Enter a string \n");
   gets(string);
   
   upper_string(string);
   lower_string(string);
   return 0;
}

void upper_string(char s[]) {
   int i= 0;
   
   while (s[i] != '\0') {
      if (s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] - 32;
      }
      i++;
   }

   printf("String converted to upper: \n");
   puts(s);
   
}
void lower_string(char s[]){
    int j=0;
    while (s[j]!='\0'){
        if(s[j]>='A'&& s[j]<='Z'){
            s[j] = s[j]+32;
        }
        j++;
    }

    printf("Strig converted to lower: \n");
    puts(s);
}