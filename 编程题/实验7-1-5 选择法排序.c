#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int max;
    int temp;
    for(int i=0;i<n;i++){
        max=num[i];
        for(int j=i+1;j<n;j++){
            if(max<num[j]){
                max = num[j];
                temp = num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("%d",num[0]);
    for(int i=1;i<n;i++){
        printf(" %d",num[i]);
    }
    return 0;
}