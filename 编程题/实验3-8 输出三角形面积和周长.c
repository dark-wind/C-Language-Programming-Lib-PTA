#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    double area,s;
    scanf("%lf %lf %lf",&a,&b,&c);
    s= (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    if(a+b >c && a+c>b && b+c>a){
        printf("area = %.2f; perimeter = %.2f",area,a+b+c);
    }else{
        printf("These sides do not correspond to a valid triangle");
    }
    return 0;
}