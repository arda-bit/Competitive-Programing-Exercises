#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int kor1,kor2,kor3,kor4,sidesqu,side,out1,out2,out3,out4;
    scanf("%d%d%d%d",&kor1,&kor2,&kor3,&kor4);
    sidesqu = abs((kor1-kor3)*(kor1-kor3)+(kor2-kor4)*(kor2-kor4));
    side=pow(sidesqu,1.0/2);
    out4=kor3+kor2-kor1;
    out3=kor1+kor2-kor4;
    out2=kor3+kor4-kor1;
    out1=kor2+kor3-kor4;
    printf("%d %d %d %d",out1,out2,out3,out4);
}
