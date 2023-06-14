#include <stdio.h>
typedef struct{
	int out;
	int in;
}train;




int main(){
	int n,i;
	int max = 0;
	train ary[5];
	int total = 0;
	for(i=0;i<4;i++){
		scanf("%d %d",&ary[i].out,&ary[i].in);
		total = total + ary[i].in;
		total = total - ary[i].out;
		if(total>max){
			max = total;
		}
	}
	printf("%d",max);
}