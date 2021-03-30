#include <stdio.h>
int pow(int n,int i){
    if(i>=1){
        return n*pow(n,i-1);
    }else{
        return 1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("pow(3,%d) = %d\n",i,pow(3,i));
    }
    return 0;
}