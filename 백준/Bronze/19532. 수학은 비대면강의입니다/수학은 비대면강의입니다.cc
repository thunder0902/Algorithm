#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//코딩 원칙 1. 주석을 잘 달아놓자!





main(){
	//x,y는 -999~999
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	//scanf("%d %d %d",&a,&b,&c);
	int x=-999;
	int y=-999;
	int i,j,k;
		for(i=-999;i<=999;i++){
			for(j=-999;j<=999;j++){
				if((a*i)+(b*j)==c&&(d*i)+(e*j)==f){
					printf("%d %d",i,j);
					return 0;
				}
			}
		}
}
	
	