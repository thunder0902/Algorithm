#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//코딩 원칙 1. 주석을 잘 달아놓자!
main(){
	
	int x,y,w,h;
	int i;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	// 6 2 10 3
	//길이 1 
	int lenth1 = w-x;//4 
	int lenth2 = h-y;//1
	int ary[5]={x,y,lenth1,lenth2};
	int min = 9999;
	for(i=0;i<4;i++){
		if(ary[i]<min){
			min=ary[i];
		}
	}
	printf("%d",min);
}
