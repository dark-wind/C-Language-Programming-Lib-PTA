#include <stdio.h>

#define PI 3.1415926535
int main(){
    int option;
    double radius,height;
    while(1){
        printf("1-Ball\n");
        printf("2-Cylinder\n");
        printf("3-Cone\n");
        printf("other-Exit\n");
        printf("Please enter your command:\n");
        scanf("%d",&option);
        if(option!=1 &&option!=2 && option!=3){
            break;
        }
        if(option==1){
            printf("Please enter the radius:\n");
            scanf("%lf",&radius);
            printf("%.2f\n",4.0/3*PI*radius*radius*radius);
        }
        if(option==2){
            printf("Please enter the radius and the height:\n");
            scanf("%lf %lf",&radius,&height);
            printf("%.2f\n",PI*radius*radius*height);
        }
        if(option==3){
            printf("Please enter the radius and the height:\n");
            scanf("%lf %lf",&radius,&height);
            printf("%.2f\n",PI*radius*radius*height/3);
        }
    }
    
    

    return 0;
}