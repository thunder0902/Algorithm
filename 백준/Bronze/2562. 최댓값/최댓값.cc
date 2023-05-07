#include <stdio.h>

int main(){
	int a=0,ary[9],index,i;
	for(i=0;i<9;i++){
		scanf("%d",&ary[i]);
		if(a<ary[i]){
			a = ary[i];
			index = i;
		}
	}
	printf("%d\n%d",a,index+1);
}