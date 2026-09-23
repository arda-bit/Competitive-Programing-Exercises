#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int checkPrime(int m){
        int count=0;
        for(int i=1; i<m; i++){
            if(m%i==0){
                count++;
            }
        }
        return count;
    }
int main(){
    long long int n;
    scanf("%lld",&n);
    while(1){
        checkPrime(n);
        if(checkPrime(n)==1){
            printf("%lld",n);
            break;
        }
        else{
            n++;
        }
    }

}
