#include <iostream>
using namespace std;

//// limit
const int minnum=1;
const int maxnum=100;
////

int main(){
	int numofcase;
	cin>>numofcase;
	while(numofcase--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a<minnum||a>maxnum){
			printf("range error : a\n");
			return -1;
		}
		if(b<minnum||b>maxnum){
			printf("range error : b\n");
			return -1;
		}
		if(c<minnum||c>maxnum){
			printf("range error : c\n");
			return -1;
		}
	}
	return 0;
}
