#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int M,N;
	int i,j;
	int cnt=0;
	int sum=0;
	int min;
	int mcnt=0;
	scanf("%d\n",&M);
	scanf("%d",&N);
	// 60 100
	for(i=M;i<=N;i++){
		if(i==1){
			continue;
		}
		for(j=1;j<=i;j++){
			if(i%j==0){
				cnt++;
			}
		}
		if(cnt==2){
			mcnt++;
			if(mcnt==1){
				min=i;
			}
			sum=sum+i;
			
		}
		cnt=0;
		
	}
	if(sum==0){
		printf("-1");
	}
	else{
		printf("%d\n%d",sum,min);
	}
}

