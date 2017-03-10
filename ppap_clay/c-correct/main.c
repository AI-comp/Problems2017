#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int numofcase;
	scanf("%d",&numofcase);
	while(numofcase--){
		char s[1111];
		scanf("%s",s);
		int n=strlen(s);
		int state=0; // 0: before 1st 'P' 1: before 'PA' 2: before 2nd 'P' 3: end
		int ok=1;
		for(int i=0;i<n;i++){
			if(s[i]=='P'){
				if(state==0){
					state=1;
				}else if(state==1){
					if(i<n-1&&s[i+1]=='A')state=2;
					else ok=0;
					i++;
				}else if(state==2){
					if(i<n-1)ok=0;
					state=3;
				}
			}else if(s[i]!='N')ok=0;
		}
		if(state==3&&ok)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
