#include <stdio.h>
void convert(int num, int count, char string[])
{
    char char_num = num + '0';
    for (int i = 0; i < count; i++)
    {
        string[i] = char_num;
    }
}
int main()
{
    int num1, num2;
    char arr1[15];
    char arr2[15];
    scanf("%d %d", &num1, &num2);
    convert(num1, num2, arr1);
    convert(num2, num1, arr2);
    if (arr1[0] <= arr2[0])
    {
        printf("%s", arr1);
    }
    else
    {
        printf("%s", arr2);
    }
    return 0;
}