#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int i,j,k;
	int x=1;
	int y=1;
	int max=0;
	int A[100][100];
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			if(max<A[i][j]){
				max=A[i][j];
				x=i;
				y=j;
			}
		}
	}
	
	
	
	printf("%d",max);
	printf("\n%d %d",x,y);

}
