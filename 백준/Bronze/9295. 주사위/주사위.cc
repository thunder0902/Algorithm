#include <stdio.h>


typedef struct{
	int x;
	int y;
}dice;




int main(){
	int i;
	dice ary[1000];
	int t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&ary[i].x,&ary[i].y);
	}
	for(i=0;i<t;i++){
		printf("Case %d: %d\n",i+1,ary[i].x+ary[i].y);
	}
}