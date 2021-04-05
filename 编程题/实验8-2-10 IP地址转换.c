#include <stdio.h>

int main()
{
    char num[4][8];
    char input[32];
    int l = 0;
    int sum = 0;
    int rs[4];
    for (int i = 0; i < 4; i++)
    {
        rs[i] = 0;
    }
    int temp;
    scanf("%s", input);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            num[i][j] = input[l];
            l++;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        temp = (int)num[i][7] - 48;
        rs[i] += temp * 1;
        temp = (int)num[i][6] - 48;
        rs[i] += temp * 2;
        temp = (int)num[i][5] - 48;
        rs[i] += temp * 4;
        temp = (int)num[i][4] - 48;
        rs[i] += temp * 8;
        temp = (int)num[i][3] - 48;
        rs[i] += temp * 16;
        temp = (int)num[i][2] - 48;
        rs[i] += temp * 32;
        temp = (int)num[i][1] - 48;
        rs[i] += temp * 64;
        temp = (int)num[i][0] - 48;
        rs[i] += temp * 128;
    }
    printf("%d.%d.%d.%d",rs[0],rs[1],rs[2],rs[3]);
    return 0;
}