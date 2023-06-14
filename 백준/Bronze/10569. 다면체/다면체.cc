#include <stdio.h>






int main(){
	int t,i,v,e;
	int ary[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&v,&e);
		ary[i]=(e-v)+2;
	}
	for(i=0;i<t;i++){
		printf("%d\n",ary[i]);
	}
}