#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//코딩 원칙 1. 주석을 잘 달아놓자!





main(){
	//체스판크기 n*m 
	int n,m;
	scanf("%d %d",&n,&m);
	char arr[51][51];
	int i,j,i2,j2;
	char bb[8][9]={"BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB"};
	char wb[8][9]={"WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW"};
	int min=9999;
	int min2=9999;
	int ans=9999;
	//체스판 입력
	for(i=0;i<n;i++){
		scanf("%s",arr[i]);
	}
	
	for(i=0; i<n-7;i++){
		for(j=0;j<m-7;j++){
			int cnt1 = 0;
			int cnt2 = 0;
			for(i2=i;i2<i+8;i2++){
				for(j2=j;j2<j+8;j2++){
					if((i2+j2)%2 == 0){
						if(arr[i2][j2] =='W'){
							cnt1++;
						}
						else{
							cnt2++;
						}
					}
					else{
						if(arr[i2][j2] =='W'){
							cnt2++;
						}
						else{
							cnt1++;
						}						
					}
				}
			}
			if(min>cnt1){
				min=cnt1;
			}
			if(min2>cnt2){
				min2=cnt2;
			}
		}
	}
	if(min>min2){
		ans=min2;
	}
	if(min2>min){
		ans=min;
	}
    if(min==min2){
        ans=min;
    }
	printf("%d",ans);
	
	
}
	