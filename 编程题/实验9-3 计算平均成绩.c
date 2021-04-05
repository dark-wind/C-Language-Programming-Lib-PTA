#include <stdio.h>

typedef struct student{
    char num[100];
    char name[100];
    double grade;
}student;

int main(){
    int n;
    scanf("%d",&n);
    student people[n];
    double sum=0;
    double average;
    for(int i=0;i<n;i++){
        scanf("%s %s %lf",people[i].num,people[i].name,&people[i].grade);
        sum+= people[i].grade;
    }
    average = sum/n;
    printf("%.2f\n",average);
    for(int i=0;i<n;i++){
        if(people[i].grade < average){
            printf("%s %s\n",people[i].name, people[i].num);
        }
    }
        
    return 0;
}