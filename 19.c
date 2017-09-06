#include <stdio.h>
int main()
{
    int m, i;
     long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d",&m);

    
    if (m < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=m; ++i)
        {
            fact *= i;          
        }
        printf("Factorial of %d = %llu", m, fact);
    }

    return 0;
}
