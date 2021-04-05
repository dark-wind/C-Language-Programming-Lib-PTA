#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int num[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&num[i][j]);
        }
    }
    int count=0;
    for(int i=1;i<m-1;i++){
        for(int j=1;j<n-1;j++){
            if(num[i][j]>num[i-1][j] && num[i][j]>num[i+1][j] && num[i][j]>num[i][j-1] &&num[i][j]>num[i][j+1]){
                printf("%d %d %d\n",num[i][j],i+1,j+1);
                count++;
            }
        }
    }
    if(count==0){
        printf("None %d %d",m,n);
    }
    return 0;
}