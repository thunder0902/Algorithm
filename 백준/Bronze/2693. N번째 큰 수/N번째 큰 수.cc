#include <stdio.h>

void merge(int a[],int low,int mid,int high){
	int b[1001];
	int i = low;
	int j = mid +1;
	int k = 0;
	while(i<=mid&&j<=high){
		if(a[i]<=a[j]){
			b[k]=a[i];
			i++;
			k++;	
		}
		else{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=mid){
			b[k]=a[i];
			i++;
			k++;		
	}
	while(j<=high){
			b[k]=a[j];
			j++;
			k++;				
	}
	k--;
	while(k>=0){
		a[low+k]=b[k];
		k--;	
	}
}

void mergesort(int a[],int low,int high){
	if(low<high){
			int m = (low+high)/2;
		mergesort(a,low,m);
		mergesort(a,m+1,high);
		merge(a,low,m,high);
	}
	else{
		return;
	}
}






int main(){
	int t,n,i,j;
	int ary[11]={0,};
	int ans[1001]={0,};
	scanf("%d",&t);
	for(i=0;i<t;i++){
		for(j=0;j<10;j++){
			scanf("%d",&ary[j]);
		}
		mergesort(ary,0,9);
		ans[i]=ary[7];
	}
	for(i=0;i<t;i++){
		printf("%d\n",ans[i]);
	}

}