#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char word[105];
    scanf("%s",&word);
    int lenght = strlen(word);
    for(int i=0; i<lenght; i++){
        if(word[i]==89 || word[i]==121 || word[i]==65 || word[i]==69 || word[i]==73 || word[i]==79 || word[i]==85 || word[i]==97 || word[i]==101 || word[i]==105 || word[i]==111 || word[i]==117){
            word[i]+=1;
        }
        else{
            if(word[i]<91){
                word[i]+=32;
            }
            printf(".%c",word[i]);
        }
    }
}
