#include <iostream>
using namespace std;

//// limit
const int minlen=1;
const int maxlen=1000;
////

int main(){
	int numofcase;
	cin>>numofcase;
	while(numofcase--){
		string s;
		cin>>s;
		int len=s.length();
		if(len<minlen||len>maxlen){
			printf("length error\n");
			return -1;
		}
		for(int i=0;i<len;i++){
			if(s[i]!='A'&&s[i]!='P'&&s[i]!='N'){
				printf("charator error\n");
				return -1;
			}
		}
	}
	return 0;
}
