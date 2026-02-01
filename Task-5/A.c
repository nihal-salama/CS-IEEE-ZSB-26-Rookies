#include <stdio.h>
int main()
{
    int tries, num, divisors;
    if (scanf("%d", &tries) != 1)
        return 0;

    for (int i = 0; i < tries; i++)
    {
        divisors = 0;
        scanf("%d", &num);
        for (int j = 1; j * j <= num; j++)
        {
            if (num % j == 0)
            {
                if (j * j == num)
                {
                    divisors++;
                }
                else
                {
                    divisors += 2;
                }
            }
        }
        printf("%d\n", divisors);
    }
    return 0;
}