#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n;
	int i;
	int idx=0;
	int sum;
	int arr[100000]={0,};
	while(1){
	scanf("%d",&n); 
	if(n==-1){
		break;
	}
	for(i=1;i<n;i++){
		if(n%i==0){
			arr[idx]=i;
			sum=sum+i;
			idx++;
		}
	}
	if(sum==n){
	
	printf("%d = ",n);
	for(i=0;i<idx;i++){

		if(i==idx-1){
			printf("%d\n",arr[i]);
		}
		else{
			printf("%d + ",arr[i]);
		}
	}
	}
	else{
		printf("%d is NOT perfect.\n",n);
	}
	idx=0;
	sum=0;
}
}

