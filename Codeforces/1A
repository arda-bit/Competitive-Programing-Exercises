#include <stdio.h>

int main() {
	long long int n,m,a;
	scanf("%lld%lld%lld",&n,&m,&a);
	long long int b=n%a;
	long long int c=m%a;
	if(c==0&&b==0){
		printf("%lld",(n*m)/(a*a));
	}
	else if(c!=0&&b!=0){
		printf("%lld",(1+n/a)*(1+m/a));
	}
	else if(b==0&&c!=0){
		printf("%lld",(n/a)*(1+(m/a)));
	}
	else{
		printf("%lld",(1+(n/a))*(m/a));
	}
	return 0;
}
