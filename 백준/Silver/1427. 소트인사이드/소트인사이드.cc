#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(void) 
{
	int ary[11]={0,};
	int n;
	int i;
	int j;
	int idx;
	scanf("%d",&n);
	while(n>0){
		idx=n%10;
		n=n/10;
		ary[idx]++;
	}
	for(i=10;i>=0;i--){
		for(j=1;j<=ary[i];j++){
			printf("%d",i);
		}
	}
}