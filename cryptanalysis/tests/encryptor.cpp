#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n = 10; // shift size
	char c;
	while(scanf("%c", &c)!=EOF){
		if('a'<=c&&c<='z') {
			c+=n;
			if('a'>c || c>'z') c-=26;
		} else if('A'<=c&&c<='Z') {
			c+=n;
			if('A'>c || c>'Z') c-=26;
		}
		cout<<c;
	}
	return 0;
}
