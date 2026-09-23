#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=2100){
        printf("1");
    }
    else{
        int x= n/100;
        int y= n%100;
        if(y<=5*x){
            printf("1");
        }
        else{
            printf("0");
        }
    }
}
