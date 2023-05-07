#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int N,K;
	int i;
	int idx=0;
	int arr[10000]={0,};
	scanf("%d %d",&N,&K);
	
	for(i=1;i<=N;i++){
		if(N%i==0){
			arr[idx]=i;
			idx++;
		}
	}
	
	if(K>idx){
		printf("0");
	}
	else{
		printf("%d",arr[K-1]);	
	}
	
}
