#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int s,count=1;
    scanf("%d",&s);
    if(s==1 || s==2){
        printf("4");
    }
    else{
    while(s!=1){
        if(s%2==0){
            s=s/2;
        }
        else{
            s=3*s+1;
        }
        count++;
    }
    printf("%d",count+1);
    }
}
