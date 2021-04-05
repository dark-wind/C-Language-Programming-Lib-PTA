#include <stdio.h>

typedef struct student{
    char num[100];
    char name[100];
    double grade1;
    double grade2;
    double grade3;
    double sum;
}student;

int main(){
    int n;
    scanf("%d",&n);
    student people[n];
    int point=0;
    int high=0;
    for(int i=0;i<n;i++){
        scanf("%s %s %lf %lf %lf",people[i].num,people[i].name,&people[i].grade1,&people[i].grade2,&people[i].grade3);
        people[i].sum=people[i].grade1+people[i].grade2+people[i].grade3;
        if(people[i].sum>high){
            high = people[i].sum;
            point=i;
        }
    }
    printf("%s %s %.0f\n",people[point].name, people[point].num, people[point].sum);
        
    return 0;
}