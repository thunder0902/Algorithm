#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	int star;
	int i,j,k;
	char s='*';
	int n=1;
	scanf("%d",&star);
	for(i=0;i<star;i++){
		for(j=i;j<(star-1);j++){
			printf(" ");
		}
		for(k=0;k<=(i*2);k++){
			printf("%c",s);
		}
		
		printf("\n");
	}
	for(i=(star-2);i>=0;i--){
		for(j=i;j<(star-1);j++){
			printf(" ");
		}
		for(k=0;k<=(i*2);k++){
			printf("%c",s);
		}
		
		printf("\n");
	}
	

}