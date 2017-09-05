#include <stdio.h>
int main()
{
    int b, expo;

    long long r = 1;

    printf("Enter a base number: ");
    scanf("%d", &b);

    printf("Enter an exponent: ");
    scanf("%d", &expon);

    while (expon!= 0)
    {
        r *= b;
        --expon;
    }

    printf("output is = %lld", r);

    return 0;
}
