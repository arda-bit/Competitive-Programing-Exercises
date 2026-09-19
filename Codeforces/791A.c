#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b;
    int ans=0;
    scanf("%d%d",&a,&b);
    while(a<=b){
        a*=3;
        b*=2;
        ans++;
    }
    printf("%d",ans);
}
