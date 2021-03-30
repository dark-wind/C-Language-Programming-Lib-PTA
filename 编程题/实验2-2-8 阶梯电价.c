#include <stdio.h>

int main(){
    int n;
    double sum=0;
    scanf("%d",&n);
    if(n<=50)
    {
        sum+=0.53*n;
    }
    else
    {
        sum+= 50*0.53 +(n-50)*0.58;
    }
    if(n<0){
        printf("Invalid Value!");
    }else{
        printf("cost = %.2f",sum);
    }
    return 0;
}