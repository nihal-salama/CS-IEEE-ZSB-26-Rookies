#include <stdio.h>
#include <math.h>
int main()
{
    int tries, num, factors[3], count;
    scanf("%d", &tries);
    for (int i = 0; i < tries; i++)
    {
        count = 0;
        scanf("%d", &num);

        for (int j = 2; j * j <= num && count < 2; j++)
        {
            if (num % j == 0)
            {
                factors[count] = j;
                count++;
                num = num / j;
            }
        }

        factors[2] = num;

        if (count == 2 && factors[2] > 1 && factors[2] != factors[0] && factors[2] != factors[1])
        {
            printf("YES\n");
            printf("%d %d %d\n", factors[0], factors[1], factors[2]);
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
