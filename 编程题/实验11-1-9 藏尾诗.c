#include <stdio.h>

int main(){
    int n=4;
    char str[n][100];
    char out[8];
    int j=0;
    char temp;
    for(int i=0;i<n;i++){
        for(int k=0;;k++){
            scanf("%c",&temp);
            str[i][k]=temp;
            if(temp=='\n'){
                out[j]=str[i][k-2];
                j++;
                out[j]=str[i][k-1];
                j++;
                break;
            }
        }
    }
    printf("%s",out);
    printf("\n");
    return 0;
}