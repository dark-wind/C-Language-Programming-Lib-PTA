#include <stdio.h>

typedef struct staff{
    char name[100];
    double basic;
    double float_salary;
    double pay;
    double salary;
}staff;

int main(){
    int n;
    scanf("%d",&n);
    staff people[n];
    for(int i=0;i<n;i++){
        scanf("%s %lf %lf %lf",people[i].name,&people[i].basic,&people[i].float_salary,&people[i].pay);
        people[i].salary = people[i].basic + people[i].float_salary - people[i].pay;
    }
    for(int i=0;i<n;i++){
        printf("%s %.2lf\n",people[i].name, people[i].salary);
    }
    return 0;
}