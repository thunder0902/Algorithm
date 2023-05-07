#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char name[20];
	double hakjum[20];
	char grade[20][3];
	double score;
	int i,j,k;
	
	double sum=0;
	double all=0;
	 
	for(i=0;i<20;i++){
		scanf("%s %lf %s",&name,&hakjum[i],&grade[i]);
		// asdfljkasdf 3.0 A+
		
		score=69-grade[i][0];
		if(grade[i][0]=='F'){
			score = 0;
		}
		if(grade[i][1]=='+'){
				score=score+0.5;
		}
		if(grade[i][1]=='0'){
				score+=0.0;
		}
		if(grade[i][0]=='P'){
				continue;	
		}
		
		sum = sum + hakjum[i];
		all = all+(hakjum[i] * score);
	}
	printf("%lf",all/sum);
	
}
