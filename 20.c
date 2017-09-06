#include <stdio.h>
int main()
{
    int a, count;

    printf("Enter an integer: ");
    scanf("%d",&a);

    for(count=1; count<=10; ++count)
    {
        printf("%d * %d = %d \n", a, count, a*count);
    }
    
    return 0;
}
