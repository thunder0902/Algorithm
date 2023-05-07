#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//코딩 원칙 1. 주석을 잘 달아놓자! 
int ary1[100];
int ary2[100];
int i,j,k;
int cnt=0;
int cnt2=0;
int idx=0;
int z;
int c=0;
//약수 구하는 함수 
void arr1(int num){
	for(i=1;i<=num;i++){
		if(num%i==0){
			ary1[cnt]=i;
			cnt++;		
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	//1.n의 약수를 구한다. 
	arr1(n);
	//2.n의 약수 배열인 ary1에서 소수를 구한다.
	for(i=0;i<cnt;i++){
		for(j=1;j<=ary1[i];j++){
			z=ary1[i]%j;
			//printf("z: %d\n",z);
			if(z==0){
				cnt2++;
				//printf("up: %d\n",cnt2);
			}
		}
		if(cnt2==2){
			ary2[idx]=ary1[i];
			//printf("idx: %d\n",ary2[idx]);
			idx++;
		}
		cnt2=0;
		//printf("jump\n");
	}
	idx=0;
	cnt2=0;
	while(n>0){
		if(n==1){
			return 0;
		}
		if(n%ary2[idx]==0){
			ary1[cnt2]=ary2[idx];
			printf("%d\n",ary1[cnt2]);
			cnt++;
			n=n/ary2[idx];
		}
		if(n%ary2[idx]!=0){
			idx++;
		}	
	}	
}
