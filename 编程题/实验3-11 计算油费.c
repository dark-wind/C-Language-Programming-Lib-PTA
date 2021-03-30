#include <stdio.h>
// 加油量a，汽油品种b（90、93或97）和服务类型c（m - 自助，e - 协助）
int main()
{
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    double price;
    if(b==90){
        price = 6.95;
    }
    if(b==93){
        price = 7.44;
    }
    if(b==97){
        price =7.93;
    }
    if(c=='m'){
        printf("%.2f",a*price*0.95);
    }else{
        printf("%.2f",a*price*0.97);
        
    }
    return 0;
}