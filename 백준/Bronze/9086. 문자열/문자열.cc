#include <stdio.h>
#include <string.h>
int main(){
	int i,j,t;
	char str[999];
	char a[999][999];
	scanf("%d\n",&t);
	for(i=0;i<t;i++){
		scanf("%s",&str);
		int len = strlen(str);
		a[i][0]=str[0];
		a[i][1]=str[len-1];
	}
	for(i=0;i<t;i++){
		printf("%c%c\n",a[i][0],a[i][1]);
	}
}
	
	