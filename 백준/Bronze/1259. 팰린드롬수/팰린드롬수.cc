#include<stdio.h>
#include <string.h>

int main(){
	char ary[6];
	int i;
	int j=0,k=0;
	int len;
	int test;
	while(1){
		scanf("%s",&ary);
		if(ary[0]==48){
			return 0;
		}
		len=strlen(ary);
		j=len-1;
		for(i=0;i<len/2;i++){
			if(ary[i]==ary[j]){
				k++;
			}
			j--;
		}
		if(len/2==k){
			printf("yes");
			j=0;
			k=0; 
		}
		else{
			printf("no");
			j=0;
			k=0;
		}
        printf("\n");
	}
}