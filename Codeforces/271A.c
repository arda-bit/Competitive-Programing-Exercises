#include <stdio.h>
int main()
{
    int test,a,b,c,d,ans;
    scanf("%d" ,& test);
    while(1){
        test++;
        ans=test;
        a=test%10;
        test=test/10;
        b=test%10;
        test=test/10;
        c=test%10;
        test=test/10;
        d=test%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }
        test=ans;
    }
    printf("%d",ans);
}
