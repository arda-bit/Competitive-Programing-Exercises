#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int max=0,n,count=0;
    long long int arr[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    for(int i=1;i<n;i++){
        if(arr[i-1]>=arr[i]){
            count++;
        }
        else{
            count=0;
        }
        if(count>max){
            max=count;
        }
    }
    printf("%d",max);
}
