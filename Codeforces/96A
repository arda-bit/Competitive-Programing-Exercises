#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
    char dizi[105];
    int count=1;
    int max=1;
    scanf("%s",&dizi);
    int l = strlen(dizi);
    for(int i=0; i<l; i++){
        if(dizi[i]==dizi[i+1]){
            count++;
            if(count>max){
                max=count;
            }
        }
        else{
            count=1;
        }
    }
    if(max>=7){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
