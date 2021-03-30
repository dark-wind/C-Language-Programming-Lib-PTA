#include <stdio.h>

int main(){
    int n=100;
    int sum=0;
    while(n>0){
        sum+=n;
        n--;
    }    
    printf("sum = %d",sum);
    return 0;
}