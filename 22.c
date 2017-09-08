include <stdio.h>
 

int gcd(int s, int t)
{

    if (s == 0 || t == 0)
       return 0;
 

    if (s== t)
        return a;
 
    if (s > t)
        return gcd(s-t, s);
    return gcd(s, t-s);
}
 

int main()
{
    int s = 78, t = 54;
    printf("GCD of %d and %d is %d ", s, t, gcd(s, t));
    return 0;
}
