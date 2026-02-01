#include <stdio.h>
#include <math.h>

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    long long X;
    scanf("%lld", &X);

    long long best_a = 1;
    long long best_b = X;

    for (long long i = sqrt(X); i >= 1; i--)
    {

        if (X % i == 0)
        {
            long long a = i;
            long long b = X / i;
            if (gcd(a, b) == 1)
            {
                best_a = a;
                best_b = b;
                break;
            }
        }
    }

    printf("%lld %lld", best_a, best_b);

    return 0;
}