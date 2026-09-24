#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int a,b,k;
    scanf("%d%d%d",&a,&b,&k);
    if(2*k>b-a){
        for(int i=0;i<b-a;i++){
            printf("%d\n",a+i);
        }
        printf("%d",b);
    }
    else{
        for(int i=a;i<a+k;i++){
            printf("%d\n",i);
        }
        for(int i=b-k+1;i<=b;i++){
            printf("%d\n",i);
        }
    }
}
