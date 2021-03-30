#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    for(int fen5=n/5;fen5>=1;fen5--){
        for(int fen2 = n/2;fen2>=1;fen2--){
            for(int fen1=n;fen1>=1;fen1--){
                if(5*fen5 + 2*fen2 + fen1==n){
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",fen5,fen2,fen1,fen5+fen2+fen1);
                    count++;
                }
            }
        }
    }
    printf("count = %d",count);

    return 0;
}