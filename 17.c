#include <stdio.h>
int main()
{
    int num, orNum, re, r = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &num);

    orNum = num;

    while (orNum != 0)
    {
        re = orNum%10;
        r += re*re*re;
        originalNumber /= 10;
    }

    if(r == num)
        printf("%d is an Armstrong number.",num);
    else
        printf("%d is not an Armstrong number.",num);

    return 0;
}
