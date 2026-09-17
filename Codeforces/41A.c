#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],t[100],a[100];
    scanf("%s%s",s,t);
    int len=strlen(s);
    int len1=strlen(t);
    int i,c=0;
    if(len != len1){
      c++;
    }
    for(i=0; i<len; i++){
      a[i]=s[len-1-i];
    }
    for(i=0; i<len; i++){
      if(a[i]!=t[i]){
        c++;
        break;
      }
    }
   if(c==0){
     printf("%s","YES");
   }
   else{
     printf("%s","NO");
   }
}
