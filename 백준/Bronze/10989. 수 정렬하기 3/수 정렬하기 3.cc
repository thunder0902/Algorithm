#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
	int i,j;
	int num;
	int count[10001]={0,};
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num);
		count[num]=count[num] +1;
	}
	for(i=1;i<10001;i++){
		for(j=1;j<=count[i];j++){
			printf("%d\n",i);
		}
	}
}
	