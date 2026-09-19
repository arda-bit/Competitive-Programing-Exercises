#include <stdio.h>
#include <math.h>

int main() {
    int n,f=0,s=0,t=0,a,b,c;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d%d%d",&a,&b,&c);
        f=f+a;
        s=s+b;
        t=t+c;
    }
    if(f==0 && s==0 && t==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
