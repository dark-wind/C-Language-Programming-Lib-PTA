#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int sum;
    int count=0;
    for(int i=m;i<=n;i++){
        sum=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            count++;
            printf("%d = 1",i);
            for(int j=2;j<i;j++){
                if(i%j==0){
                    printf(" + %d",j);
                }
            }
             printf("\n");
        }
       
    }
    if(count==0){
        printf("None");
    }
    return 0;
    
}