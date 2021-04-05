#include <stdio.h>

int main(){
    int num[4];
    char temp;
    for(int i=0;i<4;i++){
        scanf("%c",&temp);
        num[i]=(((int)temp-48)+9)%10;
    }
    int exchange;
    exchange = num[0];
    num[0]=num[2];
    num[2]=exchange;
    exchange = num[3];
    num[3]=num[1];
    num[1]=exchange;
    printf("The encrypted number is %d%d%d%d",num[0],num[1],num[2],num[3]);
    
    return 0;
}