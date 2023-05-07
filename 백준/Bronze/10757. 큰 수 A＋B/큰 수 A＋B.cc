#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char arr[]){
	int i;
	int len=strlen(arr);
	for(i=0;i<len/2;i++){
		char temp = arr[i];
		arr[i]=arr[len-i-1];
		arr[len-i-1]=temp;
	}	
	
}
int main(){
    int i;
	char A[10002]={0,};
	char B[10002]={0,};
	char answer[10002]={0,};
	int up=0;
	scanf("%s %s",&A,&B);
	reverse(A);
	reverse(B);
    int len = strlen(A) > strlen(B) ? strlen(A) : strlen(B);
	for(i=0;i<len;i++){
		int plus=A[i]-'0'+B[i]-'0'+up;
		while(plus<0){
			plus=plus+'0';
		}
		if(plus>9){
			up=1;
		}
		else{
			up=0;
		}
		answer[i]=plus%10 + '0';
	}
	if(up==1){
		answer[len]='1';
	}
	reverse(answer);
	printf("%s",answer);
}