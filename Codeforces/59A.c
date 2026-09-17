#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char word[105];
    int cap=0,mat=0;
    scanf("%s",&word);
    int lenght = strlen(word);
    for(int i=0; i<lenght; i++){
        if(word[i]<91){
            cap++;
        }
        else{
            mat++;
        }
    }
    if(mat>=cap){
        for(int i=0; i<lenght; i++){
            if(word[i]<91){
                word[i]+=32;
        }
    }
    }
    else{
        for(int i=0; i<lenght; i++){
            if(word[i]>90){
                word[i]-=32;
        }
    }
}
for(int i=0; i<lenght; i++){
        printf("%c",word[i]);
    }
}
