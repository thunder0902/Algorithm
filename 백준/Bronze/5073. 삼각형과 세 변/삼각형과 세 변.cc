#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//코딩 원칙 1. 주석을 잘 달아놓자!
main(){
	int a,b,c;
	
	for(;;){
		scanf("%d %d %d",&a,&b,&c);
		if(a==0&&b==0&&c==0){
			break;
		}
		else if(a==b&&a==c&&b==c){
			printf("Equilateral\n");
		}
 		else if(a>=b+c||b>=a+c||c>=a+b){
			printf("Invalid\n");
		}
		else if(a==b||a==c||b==c){
			printf("Isosceles\n");
		}

		else{
			printf("Scalene\n");
		}
		}
	}
