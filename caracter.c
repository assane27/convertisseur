 #include <stdio.h>
 #include <string.h>
 #include  <ctype.h>
 
char isVowel(char c)
{
    if (c >= 'A' && c <= 'Z')
       c = c + 32; 
 
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
       
 return 1;
    return 0;
}
int main()
{
    char c;
    do {
    printf("Entrer un caractère: \n");
    scanf(" %c", &c);
    }while (isalpha(c)==0);
    
    
    if(isVowel(c))  {
    printf("\n %c est une voyelle.", c);
  }
    else {
      printf("\n %c est une consonne.", c);
  }
    return 0;
}
