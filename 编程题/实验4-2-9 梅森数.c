#include <stdio.h>
int pow(int n,int m){
    if(n>1){
        return m*pow(n-1,m);
    }else{
        return m;
    }
}
int prime(int n){
    if(n==2){
        return 1;
    }
    if(n==1 || n%2==0){
        return 0;
    }
    for(int i=3;i*i<n;i=i+2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    int temp;
    for(int i=2;i<=n;i++){
        temp = pow(i,2)-1;
        if(prime(temp)){
            count++;
            printf("%d\n",temp);
        }
    }
    if(count==0){
        printf("None");
    }
    return 0;
    
}