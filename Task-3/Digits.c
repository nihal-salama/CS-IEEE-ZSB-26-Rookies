#include <stdio.h>
#include <math.h>
int main()
{
    int counter = 1, base, num;
    scanf("%d %d", &num, &base);
    while (1)
    {
        if (num >= base)
        {
            counter++;
            num = floor(num / base);
        }
        else
        {
            break;
        }
    }
    printf("%d", counter);
    return 0;
}