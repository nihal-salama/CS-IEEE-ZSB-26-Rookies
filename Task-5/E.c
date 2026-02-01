#include <stdio.h>
int main()
{
    int num_of_leges, tries, num_of_cows, ways;
    scanf("%d", &tries);
    for (int i = 0; i < tries; i++)
    {
        ways = 0;
        scanf("%d", &num_of_leges);
        if (num_of_leges % 2 != 0)
        {
            ways = 0;
        }
        else
        {
            if (num_of_leges % 2 == 0)
            {
                ways++;
            }
            if (num_of_leges % 4 == 0)
            {
                ways++;
            }
            num_of_cows = num_of_leges / 4;
            for (int i = 1; i <= num_of_cows; i++)
            {
                if ((num_of_leges - (i * 4)) % 2 == 0 && (num_of_leges - (i * 4)) != 0)
                {
                    ways++;
                }
            }
        }
        printf("%d\n", ways);
    }
    return 0;
}
