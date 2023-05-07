#include<stdio.h>
#include<string.h>

int main(){
	char word[101];
	scanf("%s",word);
	int len = strlen(word);
	int i,j,k;
	int cnt=0;
	int c=0;
	
	for(i=len-1;i>=0;i--){
		if(word[i]==word[cnt]){
			c++;
		}
		cnt++;
	}
	if(c==len){
		printf("%d",1);	
	}
	else{
		printf("%d",0);
	}
	
}