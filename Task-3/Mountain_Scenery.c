#include <stdio.h>
int main()
{
    int num_of_modified, num_of_peaks;
    scanf("%d %d", &num_of_peaks, &num_of_modified);
    int count = 2 * num_of_peaks + 1;
    int heights[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &heights[i]);
    }
    for (int i = count - 2; i > 0 && num_of_modified != 0; i -= 2)
    {
        if (heights[i] - 1 > heights[i - 1] && heights[i] - 1 > heights[i + 1])
        {
            heights[i] = heights[i] - 1;
            num_of_modified--;
        }
        else
        {
            continue;
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d ", heights[i]);
    }
    return 0;
}