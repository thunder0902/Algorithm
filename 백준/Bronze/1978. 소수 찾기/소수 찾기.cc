#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n;
	int i,j;
	scanf("%d",&n);
	int x;
	int cnt=0;
	int answer=0;
	for(i=0;i<n;i++){
		scanf("%d",&x);
		for(j=1;j<=x;j++){
			if(x%j==0){
				cnt++;
			}
		}
		if(cnt==2){
			answer++;	
		}
		cnt=0;
	}
	printf("%d",answer);
}

