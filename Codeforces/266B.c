#include <stdio.h>
int main()
{
    int n,t,i;
    scanf("%d%d" ,&n ,&t);
    char q[n],temp;
    scanf("%s",q);
    while(t--){
      for(i=0; i<n; i++){
        if(q[i]=='B' && q[i+1]=='G'){
            temp=q[i];
            q[i]=q[i+1];
            q[i+1]=temp;
            i++;
        }
      }
    }
    printf("%s",q);
}
