#include <stdio.h>

int main(){
    double n;
    scanf("%lf",&n);
    if(n==0){
        printf("f(0.0) = 0.0");
    }else{
        printf("f(%.1f) = %.1f",n,1/n);
        
    }

    return 0;
}