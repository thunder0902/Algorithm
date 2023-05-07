#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	char a[1000];
	scanf("%s",&a);
	int num;
	scanf("%d",&num);
	printf("%c",a[num-1]);

}