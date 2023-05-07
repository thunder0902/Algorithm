#include <stdio.h>

int main(){
	int a,i,cnt=0;
	char b[5]="long";
	scanf("%d",&a);
	for(i=0; i<=a; i++){
		cnt++;
		if(cnt>=4&&cnt%4==0){
			printf("%s ",b);
		}
		

	}
	printf("int");
}