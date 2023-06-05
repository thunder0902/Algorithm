#include<stdio.h>
#include <string.h>

//2��Ž�� 
//����:���� 
//����:�ڵ尡 ���� ������ , ������ �ʿ���(merge �̿���)




void merge(int a[],int low, int mid, int high){
	int b[1000];
	int i = low;
	int j = mid+1;
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

int binsearch(int ary[],int len,int x){
//1.�˻��ϰ����ϴ� �迭 2.�迭�� ���� 3.ã�����ϴ� �迭���� ��
	int l =0;
	int r = len - 1;
	int m;
	
	while(l<=r){
	    m = (r+l)/2;	
		if(x == ary[m]){
			return m;
		}
		else if(x<ary[m]){
			r = m-1;
		}
		else{
			l = m+1;
		}
	}
	return -1;
}


main(){
	int i;
	int ary[10]={30,80,20,10,50,69,29,19,78,100};
	int temp;
	//���� �� 
	for(i=0;i<10;i++){
		printf("%d ",ary[i]);
	}
	mergesort(ary,0,10-1);
	printf("\n"); 
	//���� �� 
	for(i=0;i<10;i++){
		printf("%d ",ary[i]);
	}
	temp = binsearch(ary,10,78);
	printf("\n%d",temp);
}
