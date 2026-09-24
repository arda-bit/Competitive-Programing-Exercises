#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n,is;
    long long int sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&is);
        sum =sum+is;
    }
    printf("%lld",sum-n);
}
