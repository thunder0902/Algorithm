#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

	char a[5];
	char b[5];
	char temp;
	scanf("%s",&a);
	scanf("%s",&b);
	temp=a[0];
	a[0]=a[2];
	a[2]=temp;

	temp=b[0];
	b[0]=b[2];
	b[2]=temp;
	
	if(strcmp(a,b)>0){
		printf("%s",a);
	}
	else{
		printf("%s",b);
	}
}