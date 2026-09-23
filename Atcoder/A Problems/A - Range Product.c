#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//girilen sayilarla islem yapmayi cok iyi bilmiyorum//
int main(){
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    if(a*b<=0){
        printf("Zero");
    }
    else if(a>0){
        printf("Positive");
    }
    else if(a==b){
        printf("Negative");
    }
    else if(b-a%2==0){
        printf("Negative");
    }
    else{
        printf("Positive");
    }
}
