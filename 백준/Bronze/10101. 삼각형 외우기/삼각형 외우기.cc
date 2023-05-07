#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//코딩 원칙 1. 주석을 잘 달아놓자!
main(){
	int a,b,c;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a+b+c==180){
		if(a==60&&b==60){
			printf("Equilateral");
		}
        else if(a==b)
        {
            printf("Isosceles");
        }
        else if(a==c)
        {
            printf("Isosceles");
        }
        else if(c==b)
        {
            printf("Isosceles");
        }
		else if(a!=c&&a!=b&&b!=c){
			printf("Scalene");
		}
	}
	else{
		printf("Error");
	}
}
