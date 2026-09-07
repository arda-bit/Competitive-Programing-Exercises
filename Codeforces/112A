#include <stdio.h>
#include <string.h>

int main() {
    char w1[105],w2[105];
    int count=0;
    scanf("%s%s",&w1,&w2);
    int l1 =strlen(w1);
    for(int i=0; i<l1; i++){
        if(w1[i]<96){
            w1[i]=w1[i]+32;
        }
        if(w2[i]<96){
            w2[i]=w2[i]+32;
        }
    }
    for (int i = 0; i < l1; i++){
        if(w1[i]>w2[i]){
            printf("1");
            count++;
            break;
        }
        else if(w1[i]<w2[i]){
            printf("-1");
            count++;
            break;
        }
    }
    if(count==0){
        printf("0");
    }
}
