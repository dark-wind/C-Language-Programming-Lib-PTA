#include <stdio.h>

int main()
{
    int n=10;
    int num[50];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=1;i<n;i++){
        if(num[i]!=0){
            printf("%d",i);
            num[i]--;
            break;
        }
    }
    for(int i=0;i<n;i++){
        while(num[i]>0){
            printf("%d",i);
            num[i]--;
        }
    }
    return 0;
}