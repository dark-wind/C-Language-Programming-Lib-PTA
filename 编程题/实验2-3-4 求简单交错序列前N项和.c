#include <stdio.h>

int main(){
    int n;
    double sum=0;
    scanf("%d",&n);
    int i=1;
    int sign=1;
    while(n--){
        if(sign){
            sum+= 1.0/i;
            sign=0;
        }else{
            sum-= 1.0/i;
            sign=1;
        }
        i=i+3;
    }
    printf("sum = %.3f",sum);
    return 0;
}