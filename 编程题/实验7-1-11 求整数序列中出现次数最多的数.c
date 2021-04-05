#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    double num[n][2];
    for (int i = 0; i < n; i++)
    {
        num[i][0] = 0.5;
        num[i][1] = 0;
    }
    double temp;
    int l = 0;
    int find;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &temp);
        find = 0;
        for (int j = 0; j <= l; j++)
        {
            if (num[j][0] == temp)
            {
                find = 1;
                num[j][1]++;
            }
        }
        if (find == 0)
        {
            num[l][0] = temp;
            num[l][1]++;
            l++;
        }
    }
    int max_count = 0, max_number = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i][1] > max_count)
        {
            max_count = num[i][1];
            max_number = num[i][0];
        }
    }
    printf("%d %d", max_number, max_count);

    return 0;
}