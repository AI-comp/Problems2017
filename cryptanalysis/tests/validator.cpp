#include <cstdio>

int main(){
	int n=0;
	char c;
	while(scanf("%c", &c)!=EOF){
		if(c=='\n') continue;
		else if(c<'a' || 'z'<c){
			printf("Input should contain lower case letters only.\n");
			return -1;
		}
		n++;
		if(n>10000){
			printf("Too long input size!!\n");
			return -1;
		}
	}
	return 0;
}
