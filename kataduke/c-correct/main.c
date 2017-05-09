#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1000

void solve(char s[]){
	char *res=(char *)malloc(sizeof(char)*MAX_LEN);
	int n=strlen(s);
	int cnt=0;
	for(int i=0;i<n;i++){
		if(s[i]=='.')cnt++;
	}
	for(int i=0;i<n;i++){
		if(i<cnt)res[i]='.';
		else res[i]='o';
	}
	res[n]=0;
	printf("%s\n", res);
}

int main(){
	int numofcase;
	scanf("%d",&numofcase);
	char *s = (char *)malloc(sizeof(char)*MAX_LEN);
	while(numofcase--){
		scanf("%s",s);
		solve(s);
	}
	return 0;
}
