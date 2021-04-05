#include <stdio.h>

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    getchar();
    int num[n];
    int temp;
    int point=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        num[i]=temp;
        if(temp==x){
            point=i;
        }
    }
    if(point==-1){
        printf("Not Found");
    }else{
        printf("%d",point);
    }
    return 0;
}