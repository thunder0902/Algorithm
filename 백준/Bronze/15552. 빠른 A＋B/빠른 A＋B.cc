#include <stdio.h>

int main(){
	long long t;
	int i,a,b;
	int ary[10];
	scanf("%lld",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
	return 0;
}