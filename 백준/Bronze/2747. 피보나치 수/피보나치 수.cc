#include <stdio.h>






int main(){
	int i,n;
	int one=0;
	int two=1;
	int temp;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i==0){
			temp = one;
		}
		else if(i==1){
			temp = two;
		}
		else{
		temp=one+two;
		one= two;
		two = temp;
		}
	}
	printf("%d",temp);
}