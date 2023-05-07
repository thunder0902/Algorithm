#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int a,b;

	while(1){
	scanf("%d %d",&a,&b);
	if(a==0&&b==0){
		break;
	}

	if(b%a==0){
		printf("factor\n");
	}
	if(a%b==0){
		printf("multiple\n");
	}
	if(a%b!=0&&b&a!=0){
		printf("neither\n");	
	}
	}

	
}
