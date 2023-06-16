#include <stdio.h>
#include <string.h>









int main(){
	int ary[10001]={0,};
	int i,j,n;
	scanf("%d",&n);
	int len = n;
	char cmd[10];
	int cnt=1;
	int num;
	int check=0;
	int temp;
	for(i=0;i<n;i++){
		scanf("%s",&cmd);
		if(strcmp(cmd,"push")==0){
			scanf("%d",&num);
			ary[len-cnt]=num;
			cnt++;
		}
		else if(strcmp(cmd,"pop")==0){
			for(j=0;j<n;j++){
				if(ary[j]!=0){
					check++;
				}
			}
			if(check!=0){
				for(j=0;j<n;j++){
						if(ary[j]!=0){
						printf("%d\n",ary[j]);
						ary[j]=0;
						cnt--;
						check=0;
						break;
					}
				}
			}
			else if(check==0){
					printf("-1\n");
			}
		}
		else if(strcmp(cmd,"top")==0){
			for(j=0;j<n;j++){
				if(ary[j]!=0){
					check++;
				}	
			}
			if(check!=0){
				for(j=0;j<n;j++){
					if(ary[j]!=0){
						printf("%d\n",ary[j]);
						check = 0;
						break;
					}
				}
			}
			else if(check ==0){
				printf("-1\n");
			}
		}
		else if(strcmp(cmd,"size")==0){
			for(j=0;j<n;j++){
				if(ary[j]!=0){
					check++;	
				}
			}
			printf("%d\n",check);
			check=0;
		}
		else if(strcmp(cmd,"empty")==0){
			for(j=0;j<n;j++){
				if(ary[j]!=0){
					check++;	
				}
			}
			if(check==0){
				printf("1\n");
			}
			else{
				printf("0\n");
			}
			check=0;
		}
	}
}