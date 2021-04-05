#include <stdio.h>

int main()
{
    char str[100];
    char temp;
    char find;
    int count = 0;
    for (int i = 0;; i++)
    {
        scanf("%c", &temp);

        str[i] = temp;
        if (temp == '\n')
        {
            break;
        }
    }
    scanf("%c", &find);
    for (int i = 0;; i++)
    {
        if (str[i] == '\n')
        {
            break;
        }
        if (str[i] == find)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}