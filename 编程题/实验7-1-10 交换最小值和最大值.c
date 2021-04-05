#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int min=num[0];
    int max_point=0,min_point=0,temp;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min = num[i];
            min_point = i;
        }
    }
    temp = num[0];
    num[0] = num[min_point];
    num[min_point]=temp;
    
    int max=num[0];
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max = num[i];
            max_point=i;
        }
    }
    temp = num[n-1];
    num[n-1]=num[max_point];
    num[max_point]=temp;
    for(int i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    return 0;
}