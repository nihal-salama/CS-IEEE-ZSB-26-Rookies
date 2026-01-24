#include <stdio.h>
#include <math.h>
int main()
{
    double H, A;
    int num_of_attacks;
    scanf("%lf %lf", &H, &A);
    if (H > A)
    {
        num_of_attacks = ceil(H / A);
    }
    else
    {
        num_of_attacks = 1;
    }
    printf("%d", num_of_attacks);
    return 0;
}
