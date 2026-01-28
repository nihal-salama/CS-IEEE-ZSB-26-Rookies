#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char input[10];
int length;
int char_counts[26];
char current_permutation[10];
char results[50000][20];
int total_results = 0;
void generate(int index)
{
    if (index == length)
    {
        current_permutation[length] = '\0';
        strcpy(results[total_results], current_permutation);
        total_results++;
        return;
    }
    for (int i = 0; i < 26; i++)
    {
        if (char_counts[i] > 0)
        {
            current_permutation[index] = (char)('a' + i);
            char_counts[i]--;
            generate(index + 1);
            char_counts[i]++;
        }
    }
}
int main()
{
    scanf("%s", input);
    length = strlen(input);
    for (int i = 0; i < length; i++)
    {
        char_counts[input[i] - 'a']++;
    }
    generate(0);
    printf("%d\n", total_results);
    for (int i = 0; i < total_results; i++)
    {
        printf("%s\n", results[i]);
    }
    return 0;
}