#include<stdio.h>
#include <string.h>
#include <stdlib.h> 

int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
		return -1;
	else if (num1 > num2)
		return 1;
	else
		return 0;
}


int search(int a[],int len,int x){
	int l = 0;
	int r = len -1;
	int m;
	while(l<=r){
		m = (r+l)/2;
			if(x==a[m]){
				return 1;
			}
			else if(x<a[m]){
				r = m - 1;
			}
			else{
				l = m + 1;
			}
	}
	return 0;
}



int main(){
	int i,n,m;
	scanf("%d",&n);
	int* ary = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	scanf("%d",&m);
	int* ary2 = (int*)malloc(m*sizeof(int));
	for(i=0;i<m;i++){
		scanf("%d",&ary2[i]);
	}
	qsort(ary,n,sizeof(int),compare);

	for(i=0;i<m;i++){
		printf("%d ",search(ary,n,ary2[i]));
	}
	return 0;
}