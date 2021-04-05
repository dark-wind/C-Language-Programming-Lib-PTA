#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int item[n];
    for(int i=0;i<n;i++){
        scanf("%d",&item[i]);
    }
    int box[1000];
    for(int i=0;i<1000;i++){
        box[i]=100;
    }
    int max=0;
    for(int item_id=0;item_id<n;item_id++){
        for(int box_id=1;box_id<1000;box_id++){
            if(box[box_id]>=item[item_id]){
                box[box_id]-=item[item_id];
                printf("%d %d\n",item[item_id],box_id);
                item[item_id]=box_id;
                if(box_id>max){
                    max = box_id;
                }
                break;
            }
        }
    }
    printf("%d",max);
    return 0;
}