#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//코딩 원칙 1. 주석을 잘 달아놓자!
main(){
	int aryx[3];
	int aryy[3];
	int i,j;
	int tempx;
	int tempy;
	int cnt=0;
	int cnt2=0;
	for(i=0;i<3;i++){
		scanf("%d %d",&aryx[i],&aryy[i]);	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(aryx[i]==aryx[j]){
				cnt++;
			}
			if(aryy[i]==aryy[j]){
				cnt2++;
			}
		}
		if(cnt==1){
			tempx=aryx[i];
		}
		if(cnt2==1){
			tempy=aryy[i];
		}
		cnt=0;
		cnt2=0;
	}
	printf("%d %d",tempx,tempy);
	
}
