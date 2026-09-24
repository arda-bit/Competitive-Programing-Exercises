#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int second(int n){
    int count=0;
    while(n%2==0){
        count++;
        n=n/2;
    }
    return count;
}


int main(){
    int n,k;
    int sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&k);
        int x= second(k);
        sum=sum+second(k);
    }
    printf("%d",sum);

}
