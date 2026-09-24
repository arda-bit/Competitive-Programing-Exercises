#include<stdio.h>
int main()
{
    int n,m,x,arr[100000],count=0;
    scanf("%d%d%d",&n,&m,&x);
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
        if(x<arr[i]){
            count++;
        }
    }
    int post=m-count;
    if(post>count){
        printf("%d",count);
    }
    else{
        printf("%d",post);
    }
}
