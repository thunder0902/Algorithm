#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//코딩 원칙 1. 주석을 잘 달아놓자!





main(){
	int n,b;
	int i,j;
	int six=0;
	int idx=0;
	int cnt2=0;
	scanf("%d",&n);
	for(i=666;;i++){
		six=i;
		int a = 0;
		int cnt = 0;
		while(six>0){
			a=six%10;
			//16%10 = 6
			six=six/10;
			//16/10 = 1
			if(a==6){
				cnt++;
			}
			else{
				cnt=0;
			}
			if(cnt==3){
				idx++;
				break;
			}
		}	
		if(n==idx){
			printf("%d",i);
			return 0;
		}
	}
}
	
	