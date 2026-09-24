#include <stdio.h>

int checkFactor(int n){
    int count=0;
    int x=n;
    for(int i=2;i<n;i++){
        while(n%i==0){
            n=n/i;
            count++;
        }
        if(n==1){
            return count;
            break;
        }
        else{
            count=0;
            n=x;
        }
    }
    return count;
}


int main() {
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("%d",1);
    }
    else{
    for(int i=n;i>0;i--){
        int x= checkFactor(n);
        if(x==0){
            n--;
        }
        else{
            printf("%d",n);
            break;
        }
    }
    }
}
