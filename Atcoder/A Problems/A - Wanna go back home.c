#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char way[1005];
    int nc=0,wc=0,ec=0,sc=0;
    scanf("%s",&way);
    int lenght = strlen(way);
    for(int i=0; i<lenght; i++){
        if(way[i]=='N'){
            nc++;
        }
        if(way[i]=='W'){
            wc++;
        }
        if(way[i]=='E'){
            ec++;
        }
        if(way[i]=='S'){
            sc++;
        }
    }
    if(nc!=0 && sc!=0 && wc!=0 && ec!=0){
        printf("Yes");
    }
    else if(nc==0 && sc==0 && wc!=0 && ec!=0){
        printf("Yes");
    }
    else if(nc!=0 && sc!=0 && wc==0 && ec==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
