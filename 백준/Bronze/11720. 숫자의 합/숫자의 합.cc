#include <stdio.h>
#include <string.h>
int main(){
	int n,i;
	char ary[100];
	int answer=0;
	
	scanf("%d\n",&n);
	scanf("%s",&ary);
	for(i=0;i<n;i++){
		answer=answer+(ary[i]-48);
		
	}
	printf("%d",answer);
	
}
	