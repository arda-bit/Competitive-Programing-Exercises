#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int n,k;
    int count=0;
    int arr[105];
    scanf("%d%d",&n,&k);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[k-1]<=arr[i]){
            count++;
            if(arr[i]==0 && arr[k-1]==0){
            count--;
            }
        }
    }
    printf("%d",count);
}
