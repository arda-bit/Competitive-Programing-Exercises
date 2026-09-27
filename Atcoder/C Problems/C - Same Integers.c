#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c){
        if((2*a-b-c)%2==0){
            printf("%d",(2*a-b-c)/2);
        }
        else{
            printf("%d",(2*a-b-c+3)/2);
        }
    }
    else if(b>=a && b>=c){
        if((2*b-a-c)%2==0){
            printf("%d",(2*b-a-c)/2);
        }
        else{
            printf("%d",(2*b-a-c+3)/2);
        }
    }
    else{
        if((2*c-b-a)%2==0){
            printf("%d",(2*c-b-a)/2);
        }
        else{
            printf("%d",(2*c-b-a+3)/2);
        }
    }
}
