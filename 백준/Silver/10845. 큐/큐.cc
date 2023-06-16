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
			if(check==0){
				printf("-1\n");
				check=0;
			}
			else if(check!=0){
				printf("%d\n",ary[len-1]);
				for(j=n-1;j>=0;j--){
					ary[j]=ary[j-1];
					if(j-1==0){
						break;
					}
				}
				cnt--;
				check=0;
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
		else if(strcmp(cmd,"front")==0){
			if(ary[len-1]==0){
				printf("-1\n");
			}
			else{
				printf("%d\n",ary[len-1]);
			}
		}
		else if(strcmp(cmd,"back")==0){
			for(j=n-1;j>=0;j--){
				if(ary[j]==0&&j!=n-1){
					printf("%d\n",ary[j+1]);
					break;
				}
				if(ary[j]==0&&j==n-1){
					printf("-1\n");
					break;
				}
			}
		}
	}
}