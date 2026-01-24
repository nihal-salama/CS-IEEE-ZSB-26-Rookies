#include <stdio.h>
#include <math.h>
int main()
{
    int withdraw;
    double acc_balance;
    scanf("%d %lf", &withdraw, &acc_balance);
    if (withdraw % 5 == 0 && (withdraw + 0.50) <= acc_balance)
    {
        acc_balance = (acc_balance - withdraw) - 0.50;
    }
    else
    {
        acc_balance = acc_balance;
    }
    printf("%.2lf", acc_balance);
    return 0;
}