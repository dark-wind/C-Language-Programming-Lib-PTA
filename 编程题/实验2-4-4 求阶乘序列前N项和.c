#include <stdio.h>
int fn(int n){
    if(n>1){
        return n*fn(n-1);
    }else{
        return 1;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    double sum=0;
    for(int i=1;i<=n;i++){
        sum+= fn(i);
    }
    printf("%.0f",sum);
    return 0;
}