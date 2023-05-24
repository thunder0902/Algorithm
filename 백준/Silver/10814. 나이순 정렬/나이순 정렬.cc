#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int age;
	char name[201];
}Info;

Info mem[100001];



int main(){
	int n;
	int i,j,k;
	//Info ary[100001];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %s",&mem[i].age,&mem[i].name);
	}
	for(i=1;i<=200;i++){
		for(j=0;j<n;j++){
			if(i==mem[j].age){
				printf("%d %s\n",mem[j].age,mem[j].name);
			}
		}
	}
}