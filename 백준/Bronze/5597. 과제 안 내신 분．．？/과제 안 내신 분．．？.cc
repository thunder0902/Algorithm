#include <stdio.h>

int main(){
	int i,j,n;
	int ary[31]={0,};
	int ary2[29]={0,};
	
	for(i=1;i<=30;i++){
		ary[i]=i;
	}
	for(i=1;i<29;i++){
		scanf("%d",&n);
		ary2[i]=n;
		for(j=1;j<=30;j++){
			if(ary[j]==n){
				ary[j]=0;
			}
		}
	}
	for(i=1;i<31;i++){
		if(ary[i]!=0){	
		printf("%d\n",ary[i]);
	}
	}
	
	
}