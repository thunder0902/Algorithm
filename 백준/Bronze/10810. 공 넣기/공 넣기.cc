#include <stdio.h>

int main(){
	int start,end,s,e;
	int m,n,i,j,k;
	int ary[100]={0,};
	scanf("%d %d",&n,&m);
	//n=5 m=4
	for(start=1;start<=m;start++){
		scanf("%d %d %d",&i,&j,&k);
		for(s=i;s<=j;s++){
			ary[s]=k;
		}
	}
	for(end=1;end<=n;end++){
		printf("%d ",ary[end]);
	}
}