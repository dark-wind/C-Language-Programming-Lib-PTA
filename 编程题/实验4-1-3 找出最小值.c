#include <stdio.h>
void shell(int n,int num[]){
    int temp;
    for(int gap=n/2;gap>0;gap = gap/2){
        for(int i=gap;i<n;i++){
            for(int j = i-gap;j>=0 && num[j]>num[j+gap];j = j-gap){
                temp = num[j];
                num[j]=num[j+gap];
                num[j+gap]=temp;
            }
        }
    }
}
void quick_sort(int arr[],int left,int right){
    if(left<right){
        int temp=arr[left];
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
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    
    // 顺便练习各种常用排序
    shell(n,num);
//    quick_sort(num,0,n);

    printf("min = %d",num[0]);

    return 0;
}