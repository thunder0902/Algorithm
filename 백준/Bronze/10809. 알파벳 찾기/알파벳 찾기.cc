#include <stdio.h>
#include <string.h>
int main(){
	int answer[27]={0,};
	char w[101];
	int i,j;
	int index=0;
	int cnt=-1;
	int cnt2=0;
	scanf("%s",&w);
	int len = strlen(w);
	for(i=0;i<=26;i++){
		answer[i]=-1;
	}
	for(i=97;i<123;i++){
		for(j=0;j<len;j++){
			cnt++;
			if(i==w[j]){
				answer[index]=cnt;
				cnt2++;
				if(cnt2==1){
					break;
				}
			}
		}
		cnt2=0;
		cnt=-1;
		index++;
	}
	for(i=0;i<26;i++){
		printf("%d ",answer[i]);
	}	
}