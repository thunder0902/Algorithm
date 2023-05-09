#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//코딩 원칙 1. 주석을 잘 달아놓자!
	//병합정렬
	int b[1000000];
	void merge(int a[],int low,int mid,int high){

		int i=low;
		int j=mid+1;
		int k=0;
		//본격 비교 
		while(i<=mid && j<=high){
			if(a[i]<=a[j]){
				b[k] = a[i];
				i++;
				k++;
			}
			else{
				b[k]=a[j];
				j++;
				k++;
			}
		}
		//왼쪽에 수가 남을때 
		while(i<=mid){
			b[k]=a[i];
			i++;
			k++;
		}
		//오른쪽에 수가 남을때 
		while(j<=high){
			b[k]=a[j];
			j++;
			k++;
		}
		//한칸 더 오른쪽으로 간 케이를 재배치 
		k--;
		//임시변수 b의 k인덱스 부터 -1씩 줄이면서 원래의 배열 arr에 저장 
		while(k>=0){
			a[low+k]=b[k];
			k--;
		}
	}
	void mergesort(int a[], int low, int high){
		//조건 만족
		if(low<high){
			int m = (low+high)/2;	
			//왼쪽
			mergesort(a,low,m);
			//오른쪽
			mergesort(a,m+1,high);
			//비교
			merge(a,low,m,high); 
		}
		//조건 만족 못했을때
		else{
			return;
		} 	
	}
	
	
	
	
	
	int main(){
		
		int n,i;
		int *a;
		scanf("%d",&n);
		a=(int*)malloc(sizeof(int)*n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		mergesort(a,0,n-1);
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}
	}
	
	
	
	
	