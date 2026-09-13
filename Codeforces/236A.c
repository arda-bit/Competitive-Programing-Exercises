#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <list>
 
int main() {
    char word[105];
    char res[105];
    char c;
    int count=0,ans=0,ansp=0,countt=0;
    int num = 0;
    double sum=0;
    scanf("%s",&word);
    int lenght = strlen(word);
    for(int j=0;j<lenght; j++){
        for(int i=0; i<lenght; i++){
            if(word[j]==word[i]){
                count++;
            }
        }
        if(count==1){
            ans++;
        }
        else{
            c = word[j];
            res[num] = c;
            num++;
            for(int k=0; k<num; k++){
                if(res[k] == c){
                    countt++;
                }
            }
            if(countt==1){
                ans++;
            }
            countt=0;
            
        }
        count=0;
    }
    //printf("%d", ans);
    if(ans%2==0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
}
