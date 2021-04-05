#include <stdio.h>

int main(){
    double eps;
    scanf("%le", &eps);
    double temp=1;
    double sum=0;
    double fenzi=1,fenmu=3;
    while(temp>=eps){
        sum+=temp;
        temp = temp * fenzi/fenmu;
        fenzi++;
        fenmu=fenmu+2;
    }
    sum+=temp;
    printf("PI = %.5f",sum*2);
    
    return 0;
}