#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//코딩 원칙 1. 주석을 잘 달아놓자!





main(){
	int n,i,j,k;
	long long m;
	int ary[100]={0,};
	long long max=0;
	long long a;
	scanf("%d %lld",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&ary[i]);	
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			for(k=j+1;k<n;k++){
				int sum = ary[i]+ary[j]+ary[k];
				if(sum<=m){
					if(sum>max){
						max=sum;
					}
					a=max;
				}
			}
		}
	}
	printf("%lld",a);
}
	
	