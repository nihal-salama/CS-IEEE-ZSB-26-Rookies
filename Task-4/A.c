#include <stdio.h>
#include <math.h>
int calc_factorial(int num)
{
    int factorial;
    if (num == 0)
    {
        factorial = 1;
        return factorial;
    }
    else
    {
        factorial = num * calc_factorial(num - 1);
    }
    return factorial;
}
int main()
{
    int num, factorial;
    scanf("%d", &num);
    factorial = calc_factorial(num);
    printf("%d", factorial);
    return 0;
}