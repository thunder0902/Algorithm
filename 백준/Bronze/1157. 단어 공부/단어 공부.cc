#include<stdio.h>
#include<string.h>

int main(){
	char str[1000001];
	char result[1000001];
	char answer;
	char no;
	scanf("%s",str);
	int len=strlen(str);
	int i,j,k;
	int max=0;
	int min=0;
	int cnt=0;
	int cnt2=0;
	
	
	for(i=0;i<len;i++){
		if(str[i]>=97){
			str[i]=str[i]-32;
		}
	}
    i=0;
    j=0;
    while(str[i]>0) {
        result[j]=str[i];
        for(k=0;k<j;++k) if(result[k]==str[i]) break;
        if(j==k) j=j+1;
        i=i+1;
    }
    result[j]=0;
    int len2=strlen(result);
    
    for(i=0;i<len2;i++){
    	for(j=0;j<len;j++){
    		if(result[i]==str[j]){
				cnt++;
			}
		}
		if(max==cnt){
			cnt2++;
			no=result[i];
			min=max;
		}
		if(max<cnt){
			max=cnt;
			answer=result[i];
		}
		cnt=0;
	}
	if(cnt2==0||cnt2>0&&max>min){
		printf("%c",answer);
	}
	if(cnt2>0&&max==min){
		printf("?");
	}
}