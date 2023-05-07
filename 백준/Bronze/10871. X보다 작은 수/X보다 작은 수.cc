#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//코딩 원칙 1. 주석을 잘 달아놓자!





main(){
	int ary[10000];
	int n,x,i,k;
	int cnt=0;
	scanf("%d %d",&n,&x);
	
	for(i=0;i<n;i++){
		scanf("%d",&k);
		if(k<x){
			ary[cnt]=k;
			cnt++;
		}
	}
	for(i=0;i<cnt;i++){
		printf("%d ",ary[i]);
	}
}
	