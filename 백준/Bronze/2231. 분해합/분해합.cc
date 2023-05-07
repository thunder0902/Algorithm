#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//코딩 원칙 1. 주석을 잘 달아놓자!





main(){
	//1부터 늘리면서 각 자리수를 합하는건 어떨까?
	
	long long n;
	long long i=0;
	long long b;
	long long a;
	long long ans;
	scanf("%lld",&n);
	while(i<n){
		i++;
		if(i>=1){
			b=i;
			a=i;
			while(b>0){	
			//printf("i:%d\n",i);
				a=a+(b%10);
				//printf("a: %d\n",a);
			    b=b/10;
		        //printf("b: %d\n",b);
			}
			if(a==n){
				ans=i;
				printf("%lld",ans);
				return 0;	
			}			
		}
	}
	printf("0");
	
}
	
	