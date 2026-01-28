#include <stdio.h>
#include <math.h>
int apple_weights(int apples[], int length, int i, int arr1_s, int arr2_s)
{
    if (i >= length)
        return abs(arr1_s - arr2_s);

    int t1 = apple_weights(apples, length, i + 1, arr1_s + apples[i], arr2_s);
    int t2 = apple_weights(apples, length, i + 1, arr1_s, arr2_s + apples[i]);

    return (t1 < t2) ? t1 : t2;
}

int main()
{
    int length;
    scanf("%d", &length);
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = apple_weights(arr, length, 0, 0, 0);

    printf("%d", min);
}