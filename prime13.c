#include <stdio.h> 

void main()
{
  int n, i, c= 0;
  printf("Enter any number n:");
  scanf("%d", &n);
  for (i = 1; i<= n; i++) {
      if (n% i== 0) {
         i++;
      }
  }

  if (c == 2) {
  	printf("m is a Prime number");
  }
  else {
 	 printf("mis not a Prime number");
  }
  return 0;    
}
