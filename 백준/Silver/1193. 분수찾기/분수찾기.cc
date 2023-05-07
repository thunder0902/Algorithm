#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int X;
	int cnt=1;
	int n=1; //분자 
	int m=1; //분모 
	int i,j;
	int num=1;
	//짝수일때는 분자+ 분모-
	//홀수일때는 분자- 분모+ 
	scanf("%d",&X);
	//x가 1일때 
	if(X==1){
		printf("%d/%d",1,1);
		return 0;
	}
	//x가 만약 4라면? 
	while(1){
	cnt++;
	//cnt가 2일때는 
	if(cnt%2==0){
		n=1;
		for(i=cnt;i>0;i--){
			num++;
			if(num==X){
				printf("%d/%d",n,i);	
				return 0;
			}
			n++;
		}
	}
	if(cnt%2!=0){
		m=1;
		for(i=cnt;i>0;i--){
			num++;
			if(num==X){
				printf("%d/%d",i,m);	
				return 0;
			}
			m++;
		}
	}
	}
}
