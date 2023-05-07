#include <stdio.h>

int main(){
	int ary[100]={0,};
	int n,m;
	int i,j;
	int k,z;
	int temp;
	int cnt;
	
	scanf("%d %d",&n,&m);

	for(k=1;k<=n;k++){
		ary[k]=k;
	}
	for(k=1;k<=m;k++){
		scanf("%d",&i);
		scanf("%d",&j);

		for(z=i;z<=j;z++){
			temp=ary[z];
			ary[z]=ary[j];
			ary[j]=temp;
			j--;
			if(z==j){
				break;
			}
		}
	}
	for(k=1;k<=n;k++){
		printf("%d ",ary[k]);
	}

	
}