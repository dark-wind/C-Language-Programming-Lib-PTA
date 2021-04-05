#include <stdio.h>

int main(){
    int n;
    int letter=65;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j =0 ;j<i;j++){
            printf("%c ",letter);
            letter++;
        }
        printf("\n");
    }
}