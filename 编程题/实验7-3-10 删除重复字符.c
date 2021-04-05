本题未过，后面有缘再做
#include <stdio.h>
void quick_sort(int arr[],int left,int right){
    if(left<right){
        int temp = arr[left];
        int i=left,j=right;
        while(i<j){
            while(i<j && arr[j]>temp){
                j--;
            }
            arr[i]=arr[j];
            while(i<j && arr[i]<=temp){
                i++;
            }
            arr[j]=arr[i];
        }
        arr[i]=temp;
        quick_sort(arr,left,i-1);
        quick_sort(arr,i+1,right);
    }
}
int main(){
    char str[100];
    char temp;
    int num[100];
    int i;
    for(i=0;;i++){
        scanf("%c",&temp);
        str[i]=temp;
        if(temp=='\n'){
            break;
        }
        num[i]=(int)temp;
    }
    quick_sort(num,0,i);
    int before=num[0];
    printf("%c",num[0]);
    for(int j=1;j<i;j++){
        if(num[j]==before){
            continue;
        }
        before=num[j];
        printf("%c",num[j]);
    }
    return 0;
}