#include<stdio.h>

int main(){
	int n,m,i,j,k;
	int beg;
	int mid;
	int end;
	int ary[101];
	int ary2[101];
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
		ary[i]=i;
		ary2[i]=i;	
	}
	for(i=1;i<=m;i++){
		scanf("%d %d %d",&beg,&end,&mid);
		for(j=beg;j<=end;j++){
			ary[j]=ary2[mid];
			if(mid==end){
				mid=beg;
			}
			else{
				mid++;
			}
		}
		for(k=1;k<=n;k++){
			ary2[k]=ary[k];
		}
		
	}
	for(i=1;i<=n;i++){
		printf("%d ",ary[i]);
	}
	
	
}