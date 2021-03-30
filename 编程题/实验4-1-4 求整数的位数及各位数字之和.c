#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
        count++;
    }
    printf("%d %d",count,sum);

    return 0;
}