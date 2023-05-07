#include <stdio.h>

int main(){
	int i,n,v;
	int a;
	int ary[100];
	int cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	scanf("\n%d",&v);
	
	for(i=0;i<n;i++){
		if(ary[i]==v){
			cnt++;
		}
	}
	printf("%d",cnt);
}