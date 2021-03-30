#include <stdio.h>
//7!/2!*(7-2)!
double fact(int n){
    if(n>1){
        return n*fact(n-1);
    }else{
        return 1.0;
    }
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    double sum=0;
    sum = fact(n)/fact(m)/fact(n-m);
    printf("result = %.0f",sum);
    return 0;
}