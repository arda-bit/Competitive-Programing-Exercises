#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int s,arr[55];
    scanf("%d",&s);
    for (int i = 0; i < s; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1; i<s; i++){
        for(int j=1; j<s; j++){
        if(arr[j-1]>arr[j]){
            int temp;
            temp= arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
        }
    }
    }
    double avg = ((double)arr[0]+arr[1])/2;
    for (int i = 0; i < s; i++){
        if(arr[i+2]==0){
            break;
        }
        else{
        avg = (arr[i+2]+avg)/2;
        }
    }
    printf("%lf",avg);
}
