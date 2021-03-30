#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int rs;
    if(n>0){
        rs=1;
    }else if(n==0){
        rs=0;
    }else{
        rs=-1;
    }
    printf("sign(%d) = %d",n,rs);
    return 0;
}