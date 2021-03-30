#include <stdio.h>

int main(){
    int start,arrive;
    scanf("%d %d",&start,&arrive);
    int min = arrive%100 + (arrive/100)*60  - (start%100 + (start/100)*60);
    int hour = min/60;
    min = min -60*hour;
    if(hour<10){
        printf("0%d:",hour);
    }else{
        printf("%d:",hour);
    }
    if(min<10){
        printf("0%d",min);
    }else{
        printf("%d",min);
    }
    return 0;
}