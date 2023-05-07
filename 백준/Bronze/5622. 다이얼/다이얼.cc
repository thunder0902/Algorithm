#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	char test[16];
	scanf("%s",&test);
	int i;
	int len = strlen(test);
	int answer=0;
	int num=5;
	for(i = 0; i < len; i++){
		if(test[i]==49){
				answer=answer+2;
		}
		if(test[i]=='A'||test[i]=='B'||test[i]=='C'){
				answer=answer+3;	
		}
		if(test[i]=='D'||test[i]=='E'||test[i]=='F'){
				answer=answer+4;
		}
		if(test[i]=='G'||test[i]=='H'||test[i]=='I'){
				answer=answer+5;
		}
		if(test[i]=='J'||test[i]=='K'||test[i]=='L'){
				answer=answer+6;
		}
		if(test[i]=='M'||test[i]=='N'||test[i]=='O'){
				answer=answer+7;
		}
		if(test[i]=='P'||test[i]=='Q'||test[i]=='R'||test[i]=='S'){
				answer=answer+8;
		}
		if(test[i]=='T'||test[i]=='U'||test[i]=='V'){
				answer=answer+9;
		}
		if(test[i]=='W'||test[i]=='X'||test[i]=='Y'||test[i]=='Z'){
				answer=answer+10;
		}
		if(test[i]==0){
				answer=answer+11;
		}
	}
	printf("%d",answer);
}