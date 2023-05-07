#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//코딩 원칙 1. 주석을 잘 달아놓자!
main(){
	int a,b,c;
	

	scanf("%d %d %d",&a,&b,&c);
	//삼각형은 두변의 합이 제일 긴변보다 길수가 없다. 
	if(a>=b+c){
		printf("%d",((b+c)+b+c)-1);
	}
	else if(b>=a+c){
		printf("%d",((a+c)+a+c)-1);
	}
	else if(c>=a+b){
		printf("%d",((a+b)+a+b)-1);
	}
	else if(a==b&&a==c&&b==c){
		printf("%d",a+b+c);
	}
	else if(a!=b||a!=c||b!=c){
		printf("%d",a+b+c);
	}
	
}
	
	