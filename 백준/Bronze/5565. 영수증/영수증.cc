#include <stdio.h>

int main(){
	int ary[10];
	int i;
	int sum=0;
	int total;
	scanf("%d",&total);
	for(i=0;i<9;i++){
		scanf("%d",&ary[i]);
		sum=sum+ary[i];
	}
	printf("%d",total-sum);
}