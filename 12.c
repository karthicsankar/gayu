#include <stdio.h>
int main()
{
    int n, revInt = 0, rem, orInt;

    printf("Enter an integer: ");
    scanf("%d", &n);

    orInt = n;
    while( n!=0 )
    {
        rem = n%10;
        revInt = revInt*10 + rem;
        n /= 10;
    }
    if (orInt == revInt)
        printf("%d is a palindrome:", orInt);
    else
        printf("%d is not a palindrome:", orInt);
    
    return 0;
}
