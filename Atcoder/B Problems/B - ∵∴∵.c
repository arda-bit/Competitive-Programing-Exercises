#include <stdio.h>
#include <math.h>

int main() {
    char code[105];
    char cod[105];
    char outp[210];
    scanf("%s",&code);
    scanf("%s",&cod);
    for(int i=1;i<105;i=i+2){
        outp[i]=cod[(i-1)/2];
    }
    for(int i=0;i<105;i=i+2){
        outp[i]=code[i/2];
    }
    printf("%s",outp);
}
