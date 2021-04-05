#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=n-1;i>=0;i--){
        scanf("%d",&num[i]);
    }
    printf("%d",num[0]);
    for(int i=1;i<n;i++){
        printf(" %d",num[i]);
    }
    return 0;
}
