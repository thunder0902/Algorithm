#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//코딩 원칙 1. 주석을 잘 달아놓자!
main(){
	int n;
	int ary[1001]={0,};
	int i,j;
	int temp;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(ary[i]<ary[j]){
				temp=ary[i];
				ary[i]=ary[j];
				ary[j]=temp;	
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",ary[i]);
	}
}
	
	