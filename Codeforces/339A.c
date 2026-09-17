#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char sum[210];
    int c1=0,c2=0,c3=0;
    scanf("%s",sum);
    int lenght =strlen(sum);
    for(int i=0; i<lenght; i++){
        if(sum[i]==49){
            c1++;
        }
        else if(sum[i]==50){
            c2++;
        }
        else if(sum[i]==51){
            c3++;
        }
    }
    if(c3>0){
    for(int i=0; i<c1; i++){
        printf("1+");
    }
    for(int i=0; i<c2; i++){
        printf("2+");
    }
    for(int i=0; i<c3-1; i++){
        printf("3+");
    }
    printf("3");
    }
    else if(c2>0){
    for(int i=0; i<c1; i++){
        printf("1+");
    }
    for(int i=0; i<c2-1; i++){
        printf("2+");
    }
    printf("2");
    }
    else if(c1>0){
    for(int i=0; i<c1-1; i++){
        printf("1+");
    }
    printf("1");
    }
}
