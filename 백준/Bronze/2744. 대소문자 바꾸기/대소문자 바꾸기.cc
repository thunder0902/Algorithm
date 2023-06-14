#include <stdio.h>
#include <string.h>

char change(char a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]>=97){
			a[i]=a[i]-32;
		}
		else if(a[i]<97){
			a[i]=a[i]+32;
		}
	}
	
	return printf("%s",a);
}

int main(){
	int len;
	char word[101];
	scanf("%s",&word);
	len = strlen(word);
	change(word,len);
}