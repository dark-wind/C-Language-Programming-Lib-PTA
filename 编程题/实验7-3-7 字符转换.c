#include <stdio.h>

int main(){
    char str[100];
    char temp;
    for(int i=0;;i++){
        scanf("%c",&temp);
        str[i]=temp;
        if(temp=='\n' || temp=='\0'){
            break;
        }
    }
    int first=1;
    int count=0;
    for(int i=0;;i++){
        if(str[i]=='\n' || str[i]=='\0'){
            break;
        }
        if(str[i]>='0' && str[i]<='9'){
            if(first && str[i]=='0'){
                continue;
            }
            if(first && str[i]!='0'){
                first=0;
            }
            printf("%c",str[i]);
            count++;
        }
    }
    if(count==0){
        printf("0");
    }
    
    return 0;
}