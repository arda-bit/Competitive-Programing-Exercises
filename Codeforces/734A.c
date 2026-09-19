#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int n,an=0,bn=0;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",&arr);
    for(int i=0; i<n; i++){
        if(arr[i]=='A'){
            an++;
        }
        if(arr[i]=='D'){
            bn++;
        }
    }
    if(an>bn){
        printf("Anton");
    }
    else if(an==bn){
        printf("Friendship");
    }
    else{
        printf("Danik");
    }
}
