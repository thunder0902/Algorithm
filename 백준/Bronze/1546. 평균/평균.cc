#include <stdio.h>

int main(){
	int i,j,n,m;
	double ary[1000];
	double max=0;
	double sum=0,avg;
	double newa;
	
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf",&ary[i]);
		sum=sum+ary[i];
		
	}
	for(i=0;i<n;i++){
		if(ary[i]>max){
			max=ary[i];
		}
	}
	avg=sum/(double)n;
	newa=avg/max * 100,000;
	printf("%lf",newa);
	
}