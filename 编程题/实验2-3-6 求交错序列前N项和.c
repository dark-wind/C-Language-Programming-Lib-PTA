#include <stdio.h>

int main(){
    int n;
    double sum=0;
    scanf("%d",&n);
    int i=1;
    double fenzi=1;
    int sign=1;
    while(n--){
        if(sign){
            sum+= fenzi/i;
            sign=0;
        }else{
            sum-= fenzi/i;
            sign=1;
        }
        fenzi++;
        i=i+2;
    }
    printf("%.3f",sum);
    return 0;
}