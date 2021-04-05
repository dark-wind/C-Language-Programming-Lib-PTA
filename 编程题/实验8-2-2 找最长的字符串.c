#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    int max=0;
    char temp[100];
    char longest[100];
    for(int i=0;i<n;i++){
        scanf("%s",temp);
        if(strlen(temp)>max){
            strcpy(longest,temp);
            max = strlen(temp);
        }
    }
    printf("The longest is: %s",longest);
}