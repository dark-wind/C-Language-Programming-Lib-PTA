#include <stdio.h>

int main(){
    char temp;    
    scanf("%c",&temp);

    do{
        printf("%c ",temp);
        scanf("%c",&temp);
        
    }while(temp!='\n');
    
    return 0;
    
}