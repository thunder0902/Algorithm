#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){
	//올라가는 길이 
	int a;
	//떨어지는 길이
	int b;
	//높이 
	int v;
	scanf("%d %d %d",&a,&b,&v);
	int run= a-b;
	int goal = v-b;
	int zz=goal/run;
	if(goal%run==0){
		printf("%d",zz);
	}
	else{
		printf("%d",zz+1);
	}
}
