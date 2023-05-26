#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int num;
	int idx;
} point;

point tmp[1000001]={0,}; // 새 배열



void mergeSort(point data[], int p, int r);
void merge(point data[], int p, int q, int r);
int main() {
	int i,n;
	int cnt=0;
	point *data;
	int* cntary;
	int* copyary;
	int cnt2=0;
	scanf("%d",&n);
     data = (point *)malloc(sizeof(point) * n);
     cntary = (int*)malloc(n*sizeof(int));
     copyary = (int*)malloc(n*sizeof(int));
     for(i = 0; i < n; i++) {
        scanf("%d", &data[i].num);
        data[i].idx=cnt;
        cnt++;
     }
     mergeSort(data, 0, n-1);
     for(i = 0; i < n; i++) {
     	 
         if(data[i].num<data[i+1].num){
         	cntary[i]=cnt2;
         	cnt2++;
		 }
		 else{
		 	cntary[i]=cnt2;
		 }
     }
     for(i = 0; i < n; i++) {
     	 copyary[data[i].idx]=cntary[i];
         
     }
     for(i = 0; i < n; i++) {
         printf("%d ", copyary[i]);
         
     }
}

void mergeSort(point data[], int p, int r) {
    int q;
    if(p<r) {
        q = (p+r)/2;
        mergeSort(data, p , q);
        mergeSort(data, q+1, r);
        merge(data, p, q, r);
    }
}

void merge(point data[], int p, int q, int r) {
    int i = p, j = q+1, k = p;
    int a;
    while(i<=q && j<=r) {
        if(data[i].num <= data[j].num){
        	tmp[k++] = data[i++];	
		} 
        else{
        	tmp[k++] = data[j++];	
		}
    }
    while(i<=q) tmp[k++] = data[i++];
    while(j<=r) tmp[k++] = data[j++];
    for(a = p; a<=r; a++) data[a] = tmp[a];
}