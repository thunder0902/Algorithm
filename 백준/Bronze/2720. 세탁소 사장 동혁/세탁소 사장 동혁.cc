#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int i,j;
	int q=25;
	int d=10;
	int n=5;
	int p=1;
	int t,c;
	int ary[4]={0,};
	int cnt=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&c);
		cnt=0;
		ary[cnt]=c/q;
		c=c%q;
		cnt++;
		ary[cnt]=c/d;
		c=c%d;
		cnt++;
		ary[cnt]=c/n;
		c=c%n;
		cnt++;
		ary[cnt]=c/p;
		printf("%d %d %d %d\n",ary[0],ary[1],ary[2],ary[3]);
	}

	
}
