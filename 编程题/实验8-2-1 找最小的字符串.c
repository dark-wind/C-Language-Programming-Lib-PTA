本题未过，后面有缘再做
#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    char temp[100];
    char str[n][100];
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    for(int gap= n/2;gap>0;gap=gap/2){
        for(int i=gap;i<n;i++){
            for(int j=i-gap;j>=0 && str[j][0]>str[j+gap][0];j = j-gap){
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+gap]);
                strcpy(str[j],temp);
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s\n",str[i]);
    }
//    printf("Min is: %s",str[0]);
    return 0 ;
}