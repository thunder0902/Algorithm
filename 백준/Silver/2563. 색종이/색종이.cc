#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int i,j,k,x,y,n;
	int sum=0;
	int ary[100][100]={0,};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&x,&y);
		for(j=x;j<x+10;j++){
			for(k=y;k<y+10;k++){
				ary[j][k]=1;
			}
		}
	}
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			sum=sum+ary[i][j];
		}
	}
	printf("%d",sum);
}