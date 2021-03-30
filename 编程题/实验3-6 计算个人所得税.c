#include <stdio.h>

int main()
{
    double n;
    scanf("%lf",&n);
    double rate;
    if(n<=1600){
        rate=0;
    }else if(n>1600 && n<=2500){
        rate=0.05;
    }else if(n>2500 && n<=3500){
        rate=0.1;
    }else if(n>3500 && n<=4500){
        rate = 0.15;
    }else{
        rate=0.2;
    }
    if(n>=1600){
    printf("%.2f",(n-1600)*rate);
        
    }else{
    printf("%.2f",0);
        
    }
    return 0;
}