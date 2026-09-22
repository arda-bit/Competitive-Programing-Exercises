#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
  int t,n,i,index=0,ans=0,max=0;
  scanf("%d",&t);
  int a[t],b[t];
  for(i=0; i<t; i++){
    scanf("%d%d",&a[i],&b[i]);
  }
  for(i=0; i<t; i++){
    ans-=a[i];
    ans+=b[i];
    if(ans>max){
      max=ans;
    }
  }
  printf("%d",max);
}
