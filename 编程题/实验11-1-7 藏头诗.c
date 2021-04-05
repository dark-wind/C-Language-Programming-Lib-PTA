#include <stdio.h>

int main(){
    int n=4;
    char str[n][100];
    char out[8];
    int j=0;
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
        out[j]=str[i][0];
        j++;
        out[j]=str[i][1];
        j++;
    }
    printf("%s",out);
    printf("\n");
    return 0;
}