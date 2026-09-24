#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    long long int l,w;
    scanf("%lld%lld",&l,&w);
    if(l==1 || w==1){
        printf("1");
    }
    else{
    if(l%2==0 || w%2==0){
        printf("%lld",(l*w)/2);
    }
    else{
        printf("%lld",(l*w)/2+1);
    }
    }
}
