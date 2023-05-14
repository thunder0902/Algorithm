#include<stdio.h>
#include<stdlib.h>
typedef struct {
	int x;
	int y;
} point;

point b[10000000]={0,};
void merge(point* ary,int low, int m, int high){
	int i=low;
	int j=m+1;
	int k=0;
	while(i<=m && j<=high){
		if(ary[i].y < ary[j].y){
			b[k]=ary[i];
			i++;
			k++;
		}
		else if(ary[i].y>ary[j].y){
			b[k]=ary[j];
			j++;
			k++;
		}
		else{
			if(ary[i].x<ary[j].x){
				b[k]=ary[i];
				i++;
				k++;
			}
			else if(ary[i].x>ary[j].x){
				b[k]=ary[j];
				j++;
				k++;
			}
		}
	}
	while(i<=m){
		b[k]=ary[i];
		i++;
		k++;	
	}
	while(j<=high){
		b[k]=ary[j];
		j++;
		k++;
	}
	k--;
	while(k>=0){
		ary[low+k]=b[k];
		k--;	
	}
}


void mergesort(point* ary,int low,int high){
	if(low<high){
		int m=(low+high)/2;
		mergesort(ary,low,m);
		mergesort(ary,m+1,high);
		merge(ary,low,m,high);	
	}
	else{
		return;
	}
}








int main(){
	int n,i;
	scanf("%d",&n);
	point* ary = (point*)malloc(sizeof(point)*n);
	for(i=0;i<n;i++){
		scanf("%d %d",&ary[i].x,&ary[i].y);
	}
	mergesort(ary,0,n-1);
	//after merge
	for(i=0;i<n;i++){
		printf("%d %d\n",ary[i].x,ary[i].y);
	}
}