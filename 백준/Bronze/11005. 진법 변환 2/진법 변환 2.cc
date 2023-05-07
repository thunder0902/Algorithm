#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int i,j,k;
	int n;
	int b;
	int cnt=0;
	char a[100];
	scanf("%d %d",&n,&b);
	
	while(n!=0){
		a[cnt]=n%b;
		if(0<=a[cnt]&&a[cnt]<10){
			a[cnt]=a[cnt]+48;
		}
		if(9<a[cnt]&&a[cnt]<36){
			a[cnt]=a[cnt]+55;
		}
		n=n/b;
		cnt++;
	}
	for(i=cnt-1;i>=0;i--){
		printf("%c",a[i]);
	}
	
	
	
}
