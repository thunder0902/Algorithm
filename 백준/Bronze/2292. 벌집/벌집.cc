#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int i,j,k;
	int n;
	//1 7 19 31 61
	scanf("%d",&n);
	int num=1;
	int pass=1;
	while(n>num){
		num=num+(6*pass);
		pass++;
	}
	printf("%d",pass);
}
