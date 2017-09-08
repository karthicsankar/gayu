#include <stdio.h>
int main()
{
    int i, reverseno= 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &i);

    while(n != 0)
    {
        rem = i%10;
        reverseNo = reverseNo*10 + rem;
        i/= 10;
    }

    printf("Reverse No = %d", reverseNo);

    return 0;
}
