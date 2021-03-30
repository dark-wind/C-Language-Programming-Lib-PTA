#include <stdio.h>

int main(){
    int n;
    double sum=0;
    scanf("%d",&n);
    int i=1;
    while(n--){
        sum+= 1.0/i;
        i=i+2;
    }
    printf("sum = %.6f",sum);
    return 0;
}