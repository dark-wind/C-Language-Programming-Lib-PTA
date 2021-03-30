#include <stdio.h>
void Goldbach( int n );
int main()
{
    int n;
    scanf("%d",&n);
    Goldbach(n);

    return 0;
}
int prime( int p )
{	
    if(p==2){
        return 1;
    }
	if(p<=1 || p%2==0){
        return 0;
    }
    for(int i=3;i*i<=p;i=i+2){
        if(p%i==0){
            return 0;
        }
    }
    return 1;
} 
void Goldbach( int n ){
	for(int a=2; a<=n/2; a++){	
		if(prime(a) && prime(n-a)){
            printf("%d = %d + %d",n,a,n-a);
            break;
        }
    }
}
