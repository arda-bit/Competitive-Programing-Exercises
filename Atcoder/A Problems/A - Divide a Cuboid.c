#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long long int a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a>=b && a>=c){
        if(a%2==0){
            printf("0");
        }
        else{
            printf("%lld",b*c);
        }
    }
    else if(b>=a && b>=c){
        if(b%2==0){
            printf("0");
        }
        else{
            printf("%lld",a*c);
        }
    }
    else if(c>=b && c>=a){
        if(c%2==0){
            printf("0");
        }
        else{
            printf("%lld",b*a);
        }
    }
}
