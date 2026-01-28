#include <stdio.h>
#include <string.h>
#include <math.h>
char str_1[20];
char str_2[20];
int length;
int targer_position = 0;
int question_marks = 0;
int correct_moves(int index, int current_position)
{
    if (index == length)
    {
        if (current_position == targer_position)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if (str_2[index] == '+')
        {
            return correct_moves(index + 1, current_position + 1);
        }
        else if (str_2[index] == '-')
        {
            return correct_moves(index + 1, current_position - 1);
        }
        else
        {
            int way_1 = correct_moves(index + 1, current_position + 1);
            int way_2 = correct_moves(index + 1, current_position - 1);
            return way_1 + way_2;
        }
    }
}
int main()
{
    scanf("%s", str_1);
    scanf("%s", str_2);
    length = strlen(str_1);
    for (int i = 0; i < length; i++)
    {
        if (str_1[i] == '+')
        {
            targer_position++;
        }
        else
        {
            targer_position--;
        }
    }
    for (int i = 0; i < length; i++)
    {
        if (str_2[i] == '?')
        {
            question_marks++;
        }
    }
    int successful_ways = correct_moves(0, 0);
    double total_ways = pow(2, question_marks);
    printf("%.12f", successful_ways / total_ways);
    return 0;
}