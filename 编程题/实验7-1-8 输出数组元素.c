#include <stdio.h>

int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        //被3整除其实是4个
        if (i % 3 == 0 && i>0)
        {
            a = num[i - 3];
            b = num[i - 2];
            c = num[i - 1];
            printf("%d %d %d\n", b - a, c - b, num[i] - c);
        }
    }
    // 2 3 4 5 6
    // 1 1 1
    // 1
    // 2 3 4 5 
    // 1 1 1
    // 2 3 4
    // 1 1
    // 2 3
    // 1
    int left = n%3;
    if(left==2){
        printf("%d\n", num[n-1]-num[n-2]);
    }
    if(left==0){
        printf("%d %d\n",num[n-2]-num[n-3], num[n-1]-num[n-2]);
    }
    return 0;
}