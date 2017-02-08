#include "testlib.h"
#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;

void check_case(){
	int n = inf.readInt(1,500,"N");
	inf.readSpace();
	int m = inf.readInt(0,500,"M");
	inf.readSpace();
	int l = inf.readInt(0,20000,"L");
	inf.readEoln();

	int x=0, y=0;
	for(int i=0; i<n; i++){
		char c = inf.readChar();
		const int dx[] = {-1,0,1,0}, dy[] = {0,1,0,-1};
		const string s = "ENWS";
		inf.readSpace();
		int d= inf.readInt(1,20000,"d_i");
		bool ok=false;
		for(int j=0; j<4; j++){
			if(c==s[j]){
				x += d*dx[j];
				y += d*dy[j];
				ok = true;
				break;
			}
		}
		if(ok==false || x<-10000 || y<-10000 || x>10000 || y>10000){
			cout<<"invalid move at "<<i<<"th move"<<endl;
			cout<<"currently at "<<x<<","<<y<<endl;
			exit(-1);
		}
		inf.readEoln();
	}

	set<pair<int, int> > s;
	for(int i=0; i<m; i++){
		int xi = inf.readInt(-10000,10000,"x_i");
		inf.readSpace();
		int yi = inf.readInt(-10000,10000,"y_i");
		if(s.count(make_pair(xi,yi))==1){
			cout<<"duplicate nokemon position..."<<endl;
			exit(-1);
		}
		inf.readEoln();
		s.insert(make_pair(xi,yi));
	}
	return;
}

int main(){
	registerValidation();
	int n = inf.readInt(1, 50, "T");
	inf.readEoln();

	for(int i=0; i<n ;i++){
		check_case();
	}
	inf.readEof();
	return 0;
}
