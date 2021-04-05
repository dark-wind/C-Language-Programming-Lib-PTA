#include <stdio.h>

int main(){
    double x1_fenzi,x1_fenmu;
    double x2_fenzi,x2_fenmu;
    scanf("%lf/%lf %lf/%lf",&x1_fenzi,&x1_fenmu,&x2_fenzi,&x2_fenmu);
    if(x1_fenzi/x1_fenmu > x2_fenzi/x2_fenmu){
        printf("%.0f/%.0f > %.0f/%.0f",x1_fenzi,x1_fenmu,x2_fenzi,x2_fenmu);
    }
    if(x1_fenzi/x1_fenmu < x2_fenzi/x2_fenmu){
        printf("%.0f/%.0f < %.0f/%.0f",x1_fenzi,x1_fenmu,x2_fenzi,x2_fenmu);
    }
    if(x1_fenzi/x1_fenmu == x2_fenzi/x2_fenmu){
        printf("%.0f/%.0f = %.0f/%.0f",x1_fenzi,x1_fenmu,x2_fenzi,x2_fenmu);
    }

    return 0;
}