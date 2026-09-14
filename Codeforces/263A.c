#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int vow[6][6];
    int a=0;
    int b=0;

    while(a < 5)
    {
        b = 0;
        while (b < 5)
        {
            scanf("%d",&(vow[a][b++]));
        }
        a++;
    }
    for(int i=0;i<5;i++){
        for(int j=0; j<5; j++){
            if(vow[i][j]==1){
                    printf("%d\n",abs(j-2)+abs(i-2));
                    break;
            }
        }
    }
}
