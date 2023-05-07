#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int cnt=2;
	int i,n;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		cnt=cnt+(cnt-1);	
	}
	printf("%d\n",cnt*cnt);
	
	
}
