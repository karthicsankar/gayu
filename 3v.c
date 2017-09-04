#include <stdio.h>
int main()
{
    char n;
   printf("Enter character ");
    scanf("%c",&n);
    if(n == 'a' || n == 'e' || n == 'i' || n== 'o' || n == 'u')
      {
      printf("%c is a vowel:",n);
      }
    else
    {
        printf("%c is a conso:", n);
        }
    return 0;
}
