#include <stdio.h>
#include <math.h>
int main(){
    double x;
    scanf("%lf",&x);
    if(x>=0){
        printf("f(%.2f) = %.2f", x,sqrt(x));
    }else{
        printf("f(%.2f) = %.2f",x,(x+1)*(x+1)+2*x+1/x);
    }
    return 0;
}