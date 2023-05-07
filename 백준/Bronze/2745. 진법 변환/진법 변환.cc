#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int i,j,k;
	char n[10000];
	int b;
	int temp;
	int answer=0;
	scanf("%s %d",&n,&b);
	int len = strlen(n);
	int cnt =len-1;
	for(i=0;i<len;i++){
		if(n[i]>=48&&n[i]<58){
			temp =n[i]-48;
		}
		if(n[i]>=65&&n[i]<91){
			temp =n[i]-55;
		}
		answer += temp * pow(b,cnt);
		cnt--;
		
	}
	printf("%d",answer);
}

