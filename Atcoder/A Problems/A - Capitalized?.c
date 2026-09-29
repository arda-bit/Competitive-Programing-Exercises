#include <stdio.h>

int main() {
    int count=0;
    char word[105];
    scanf("%s",&word);
    if(word[0]<91){
        for(int i=1;i<105;i++){
            if(word[i]==0){
                break;
            }
            else if(word[i]<91){
                count++;
            }
        }
        if(count==0){
                printf("Yes");
            }
            else{
                printf("No");
            }
    }
    else{
        printf("No");
    }
}
