#include <stdio.h>
#include <string.h>

typedef struct word{
    char str[100];
    int length;
}word;

int main(){
    int count=0;
    word *vocabulary[20],*p;
    char temp[100];
    for(;;count++){
        scanf("%s",temp);
        if(strcmp(temp,"#")==0){
            break;
        }
        vocabulary[count]=(word *)malloc(sizeof(word));
        strcpy(vocabulary[count]->str,temp);
        vocabulary[count]->length = strlen(vocabulary[count]->str);
    }
    for(int gap = count/2;gap>0;gap=gap/2){
        for(int i=gap;i<count;i++){
            for(int j=i-gap;j>=0 && vocabulary[j]->length> vocabulary[j+gap]->length;j=j-gap){
                p=vocabulary[j];
                vocabulary[j]=vocabulary[j+gap];
                vocabulary[j+gap]=p;
            }
        }
    }
    for(int i=0;i<count;i++){
        printf("%s ",vocabulary[i]->str);
    }
    return 0;
}