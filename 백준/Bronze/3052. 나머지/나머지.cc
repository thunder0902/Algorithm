#include <stdio.h>

int main(){
	
	int i,j,n;
	int cnt=0;
	int cnt2=0;
	int temp;
	int ary[10];
	int ary2[10];
	for(i=0;i<10;i++){
		scanf("%d",&n);
		ary[i]=n%42;
		ary2[i]=n%42;
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(ary[j]>ary[j+1]){
				temp=ary[j];
				ary[j]=ary[j+1];
				ary[j+1]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(ary[j]>ary2[j+1]){
				temp=ary2[j];
				ary2[j]=ary2[j+1];
				ary2[j+1]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		if(ary[i]!=ary[i+1]){
		cnt2++;
	}
		
	}
	printf("%d",cnt2);
}
