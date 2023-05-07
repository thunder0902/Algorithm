#include <stdio.h>

int main(){
	int i,a;
	int cnt=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		cnt=cnt+i;	
	}
	printf("%d",cnt);
	return 0;
}