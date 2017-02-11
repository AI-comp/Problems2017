#include <iostream>
using namespace std;

//// limit
const int minlen=1;
const int maxlen=100;
////

string s;

int main(){
	while(cin>>s){
		int len=s.length();
		if(len<minlen||len>maxlen){
			printf("length error\n");
			return -1;
		}
		for(int i=0;i<len;i++){
			if(s[i]!='x'&&s[i]!='o'&&s[i]!='.'){
				printf("charator error\n");
				return -1;
			}
		}
	}
	return 0;
}

