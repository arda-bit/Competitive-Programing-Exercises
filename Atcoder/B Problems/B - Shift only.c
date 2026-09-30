#include <stdio.h>

int second(int x){
    int count=0;
    while(x%2==0){
        x=x/2;
        count++;
    }
    return count;
}

int main() {
    int t,x;
    long long int min=1000000000;
    scanf("%d",&t);
    for(int i=0;i<t; i++){
        scanf("%d",&x);
        int sec= second(x);
        if(sec<min){
            min=sec;
        }
    }
    printf("%d",min);
}
