#include <stdio.h>
void quick_sort(int arr[],int left,int right){
    if(left<right){
        int temp = arr[left];
        int i=left,j=right;
        while(i<j){
            while(i<j &&arr[j]>temp){
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
    int n=3;
    int num[n];
    int temp;
    int big,small,count=1;
    scanf("%d",&temp);
    do{
        num[0]=temp%10;
        num[1]=(temp/10)%10;
        num[2]=temp/100;    
        quick_sort(num,0,2);
        big = num[2]*100 + num[1]*10 +num[0];
        small = num[0]*100 +num[1]*10 + num[2];
        printf("%d: %d - %d = %d\n",count,big,small,big-small);
        temp = big-small;
        count++;
    }while(temp!=495);
    
    

    return 0;
}