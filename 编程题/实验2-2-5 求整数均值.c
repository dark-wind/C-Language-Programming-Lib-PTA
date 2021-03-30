#include <stdio.h>

int main(){
    double sum=0;
    double temp;
    for(int i=0;i<4;i++){
        scanf("%lf",&temp);
        sum+=temp;
    }
    printf("Sum = %.0f; Average = %.1f",sum,sum/4);
    return 0;
}