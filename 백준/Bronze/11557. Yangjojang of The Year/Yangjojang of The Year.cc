#include <stdio.h>

int arry[1000];
int max=0;
int idx;
typedef struct liter{
	char name[21];
	int liter;
}lt;

void com(lt a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i].liter>max){
			max=a[i].liter;
			idx=i;
		}
	}
}


int main(){
	lt ary[101];
	int t,n,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%s %d",&ary[j].name,&ary[j].liter);
		}
	com(ary,n);
	arry[i]=idx;
	max=0;
	}
	for(i=0;i<t;i++){
		printf("%s\n",ary[arry[i]].name);
	}
}