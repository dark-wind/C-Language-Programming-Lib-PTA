#include <stdio.h>

int main(){
    double n;
    scanf("%lf",&n);
    if(n!=10){
        printf("f(%.1f) = %.1f",n,n);
    }else{
        printf("f(%.1f) = %.1f",n,1/n);
        
    }
    return 0;
}