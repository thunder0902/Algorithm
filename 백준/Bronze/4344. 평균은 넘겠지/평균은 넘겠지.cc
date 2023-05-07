#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int n;
	int m;
	int ary[1000];
	
	float avg;
	float avgary[100];
	float real;
	
	
	int i,j,k;
	int sum=0;
	int plus; 
	int cnt=0;
	
	
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		for(j=0;j<m;j++){
			scanf("%d",&plus);
			ary[j]=plus;
			sum=sum+plus;
		}
		avg=sum/m;
		for(j=0;j<m;j++){
			if(ary[j]>avg){
				cnt++;
			}
		}
		real=(float)cnt/(float)m;
		real=real*(float)100;
		//printf("%3.3f\n",real);
		avgary[i]=real;
		real=0;
		cnt=0;
		sum=0;
	}
	for(i=0;i<n;i++){
		printf("%3.3f%%\n",avgary[i]);
	}
}