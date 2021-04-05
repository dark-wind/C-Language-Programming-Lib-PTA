//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int num[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0){
                num[i][j]=1;
            }else{
                num[i][j]=0;
            }
        }
    }
    num[0][0]=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            num[i][j]=num[i-1][j]+num[i-1][j-1];
        }
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            printf(" ");
        }
        for(int j=0;j<n;j++){
            if(num[i][j]!=0){
                printf("%4d",num[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}