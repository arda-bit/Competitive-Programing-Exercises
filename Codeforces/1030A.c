#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n,arr[105];
    int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1){
            count++;
        }
    }
    if(count==0)
    printf("EASY");
    else
    printf("HARD");
}
