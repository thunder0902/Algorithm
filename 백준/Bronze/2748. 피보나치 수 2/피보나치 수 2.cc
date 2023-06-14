#include <stdio.h>






long long int f(int n){
	int i;
	long long int f1 = 1;
	long long int f2 = 1;
	long long int temp = 2;
	for(i = 0; i<=n;i++){
		if(n==0){
			return 0;
		}
		if(n<=2){
			return 1;
		}
		else if(i>3){
			f2 = f1;
			f1 = temp;
			temp = f1+f2;
		}
	}
	return temp;
}

int main(){
	int n,i;
	long long int zz=0;
	scanf("%d",&n);
	zz = f(n);
	printf("%lld",zz);
	return 0;
}