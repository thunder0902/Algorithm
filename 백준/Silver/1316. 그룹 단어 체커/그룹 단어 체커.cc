#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
	char str[101];
	int i,j,k;
	
	int n;
	scanf("%d",&n);
	int cnt=n;
	for(i=0;i<n;i++){	
		char first = '0';
		int al[26]={0,};
		scanf("%s",&str);
		for(j=0; str[j]!='\0'; j++){
			if(first != str[j]){
				first = str[j];
				al[str[j]-'a'] += 1;
			}
			if(al[str[j]-'a']==2){
				cnt = cnt -1;
				break;	
			}
			
			
			
			
		}
	}
	printf("%d",cnt);
}
