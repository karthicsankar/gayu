#include <stdio.h>
int main()
{
    int l, h, a, s;
    printf("Enter  the two numbers: ");
    scanf("%d %d", &l, &h);

    printf("Prime numbers between %d and %d are: ", l, h);

    while (l< h)
    {
        flag = 0;

        for(a = 2; a<= l/2; ++a)
        {
            if(l % a== 0)
            {
                s = 1;
                break;
            }
        }

        if (s== 0)
            printf("%d ", l);

        ++l;
    }

    return 0;
}
