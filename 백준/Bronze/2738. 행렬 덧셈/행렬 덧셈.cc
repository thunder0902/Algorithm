#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int i,j,k;
	int A[100][100];
	int B[100][100];
	int n,m;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",A[i][j]+B[i][j]);
		}
		printf("\n");
	}
	
	
}

