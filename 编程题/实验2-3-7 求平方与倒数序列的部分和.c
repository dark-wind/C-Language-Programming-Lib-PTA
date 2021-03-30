#include <stdio.h>

int main(){
    int m,n;
    double sum=0;
    scanf("%d %d",&m,&n);
    for(double i = m;i<=n;i++){
        sum+= i*i +1/i;
    }
    printf("sum = %.6f",sum);
    return 0;
}