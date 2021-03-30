#include <stdio.h>

int main(){
    double lower,upper;
    scanf("%lf %lf",&lower,&upper);
    if(lower<=upper && upper<=100){
        printf("fahr celsius\n");
        for(int i=lower;i<=upper;i=i+2){
            printf("%d%6.1f\n",i,5.0*(i-32)/9);
        }
        
    }else{
        printf("Invalid.");
    }
    return 0;
}