#include <stdio.h> 

void main()
{
  int m, count, c= 0;
  printf("Enter any number n:");
  scanf("%d", &m);
  for (count = 1; count <= m; count++) {
      if (m % i == 0) {
         c++;
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
