#include <stdio.h>

int main(){
	int start,end,s,e;
	int m,n,i,j,k;
	int temp;
	int ary[100]={0,};
	scanf("%d %d",&n,&m);
	//n=5 m=4
	for(k=0;k<=n;k++){
		ary[k]=k;
	}	
	
	
	
	for(start=1;start<=m;start++){
		scanf("%d %d",&i,&j);
		temp=ary[i];
		ary[i]=ary[j];
		ary[j]=temp;
	}
	for(k=1;k<=n;k++){
		printf("%d ",ary[k]);
	}
}