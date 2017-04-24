#include <stdio.h>
#include <string.h>

void solve(char s[]){
	strcat(s,"x");
	int n=strlen(s);
	int res=0;
	for(int i=0;i<n-1;i++){
		if(s[i]=='o'&&s[i+1]=='o'){
			while(s[i]!='x'){
				if(s[i]=='.')res++;
				i++;
			}
		}
	}
	printf("%d\n", res);
}

int main(){
	char s[1000];
	int numofcase;
	scanf("%d",&numofcase);
	while(numofcase--){
		scanf("%s",s);
		solve(s);
	}
	return 0;
}
