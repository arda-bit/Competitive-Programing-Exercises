#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char result[15];
    int count=0,cout=0,cin=0;
    scanf("%s",&result);
    int lenght = strlen(result);
    for(int i=0; i<lenght; i++){
        if(result[i]<91){
            count++;
        }
        if(result[i]=='C'){
            cout++;
        }
    }
    for(int i=2; i<lenght-1; i++){
        if(result[i]=='C'){
            cin++;
        }
    }
    if(result[0]!='A'){
        printf("WA");
    }
    else if(count!=2){
        printf("WA");
    }
    else if(cout!=1){
        printf("WA");
    }
    else if(cin!=1){
        printf("WA");
    }
    else{
        printf("AC");
    }
}
