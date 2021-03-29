#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int num[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    scanf("%d",&num[n]);
    int temp;
    int gap=n/2;
    if(gap<1){
        gap=1;
    }
    for(;gap>0;gap=gap/2){
        for(int i = gap;i<n+1;i++){
            for(int j=i-gap; j>=0 && num[j]>num[j+gap];j=j-gap){
                temp = num[j];
                num[j]=num[j+gap];
                num[j+gap]=temp;
            }
        }
    }
    for(int i=0;i<n+1;i++){
        printf("%d ",num[i]);
    }
    return 0;
}