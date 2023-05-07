#include <stdio.h>
#include <string.h>
int main(){
	char answer[1000][1000];
	char test[21];
	int lenary[100];
	int loop;
	int cnt=0;
	int i,j,k;
	int n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d %s",&loop,&test);
		int len = strlen(test);
		lenary[i]=len*loop;
		for(k=0;k<len;k++){		
			for(j=0;j<loop;j++){
				answer[i][cnt]=test[k];
				cnt++;
			}
		}
		answer[i][cnt]=NULL;
		cnt=0;
	}
	for(i=0;i<n;i++){
		printf("%s\n",answer[i]);
	}
}