#include <stdio.h>
#include <math.h>

int main() {
	int a,b;
	scanf("%d%d", &a,&b);
	int count = 0;
	for (int i=a; i<=b; i++) {
		if ((i/10000 == i%10) && ((i/1000)%10 == (i%100)/10))
			count++;
	}
	printf("%d", count);
	return 0;
}
