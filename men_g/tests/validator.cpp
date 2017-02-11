#include <iostream>
using namespace std;

//// limit
const int minnum=1;
const int maxnum=100;
////

int a,b,c;

int main(){
	while(cin>>a>>b>>c){
		if(a<minnum||a>maxnum||b<minnum||b>maxnum||c<minnum||c>maxnum){
			printf("range error\n");
			return -1;
		}
	}
	return 0;
}
