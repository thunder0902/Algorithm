#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	char word[100];
	char alpha[28]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','y','x','z','=','-'};
	int i,j,k;
	int cnt=0;
	scanf("%s",&word);
	int len=strlen(word);
	for(i=0;i<len;i++){
		cnt++;
		for(j=0;j<28;j++){
			if(word[i]==alpha[j]){
				
				
				if(word[i]=='l'&&word[i+1]=='j'){
					i++;
				}
				else if(word[i]=='n'&&word[i+1]=='j'){
					i++;
				}
				else if(word[i]=='d'&&word[i+1]=='z'&&word[i+2]=='='){
					i=i+2;
				}
				else if(word[i]=='s'&&word[i+1]=='='){
					i++;
				}
				else if(word[i]=='z'&&word[i+1]=='='){
					i++;
				}
				else if(word[i]=='d'&&word[i+1]=='-'){
					i++;
				}
				else if(word[i]=='c'&&word[i+1]=='-'){
					i++;
					
				}
				else if(word[i]=='c'&&word[i+1]=='='){
					i++;
				}
			}
			
		}

	}
	printf("%d",cnt);
	
}

