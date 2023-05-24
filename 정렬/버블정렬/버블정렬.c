#include<stdio.h>

int main(){
	int i,j,temp;
	int ary[10]={10,1,5,7,8,6,4,3,2,9};
	//작은수부터 오름차순 정렬을 한다.
	
	//step one 반복문을 만든다
	for(i=0;i<10;i++){
		for(j=0;j<9-i;j++){
			if(ary[j]>ary[j+1]){
				temp = ary[j];
				ary[j]=ary[j+1];
				ary[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<10;i++){
		printf("%d ",ary[i]);
	}
	
	
	
}
