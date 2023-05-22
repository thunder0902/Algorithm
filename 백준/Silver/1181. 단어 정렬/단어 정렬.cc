#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct{
	int len;
	char str[51];
}Word;

Word b[20001];
void merge(Word a[],int low, int mid,int high){
	
	int i = low;
	int j = mid+1;
	int k = 0;
	while(i<=mid&&j<=high){
		if(a[i].len<a[j].len){
			b[k]=a[i];
			i++;
			k++;	
		}
		else if(a[j].len<a[i].len){
			b[k]=a[j];
			j++;
			k++;
		}
		else{
			if(strcmp(a[i].str,a[j].str)<0){
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


void mergesort(Word a[],int low,int high){
	if(low<high){
		int m = (low+high)/2;
		mergesort(a,low,m);
		mergesort(a,m+1,high);
		merge(a,low,m,high);
	}
}



int main(){
	int n;
	Word ary[20001];
	int i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&ary[i].str);
		ary[i].len = strlen(ary[i].str);
		//중복제거
		for(j=0;j<i;j++){
			if(strcmp(ary[i].str,ary[j].str)==0){
				i=i-1;
				n=n-1;
				break;
			}
		} 
	}
	mergesort(ary, 0, n-1);
	for(i=0;i<n;i++){
		printf("%s\n",ary[i].str);
	}
}