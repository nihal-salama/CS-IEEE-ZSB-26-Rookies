#include <stdio.h>
void function_(long long num)
{
    if (num == 1)
    {
        return;
    }
    if (num % 2 == 0)
    {
        num = num / 2;
        printf("%lld ", num);
        function_(num);
    }
    else
    {
        num = (num * 3) + 1;
        printf("%lld ", num);
        function_(num);
    }
}
int main()
{
    long long num;
    scanf("%lld", &num);
    printf("%lld ", num);
    function_(num);
    return 0;
}