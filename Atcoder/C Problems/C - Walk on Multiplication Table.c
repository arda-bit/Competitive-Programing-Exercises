#include<stdio.h>
#include<math.h>
int main()
{
    long long int x;
    scanf("%lld",&x);
    int y= sqrt(x);
    for(int i=y; i>0; i--){
        if(x%i==0){
            y= i;
            break;
        }
    }
    long long int z= x/y;
    printf("%lld",z+y-2);
}
