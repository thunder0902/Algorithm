#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	int i,j,k;
	char word[5][15]={0,};
	for(i=0;i<5;i++){
		scanf("%s",word[i]);
	}
	for(i=0;i<15;i++){
		for(j=0;j<5;j++){
			if(word[j][i]=='\0'){
				continue;
			}
			else{
				printf("%c",word[j][i]);
			}
		}
	}
}