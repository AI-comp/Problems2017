#include "testlib.h"
#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;

const int max_testcase = 50;
const int max_n = 500;
const int max_m = 500;
const int field_len = 10000;

void check_case(){
	int n = inf.readInt(1, max_n, "N");
	inf.readSpace();
	int m = inf.readInt(0, max_m, "M");
	inf.readSpace();
	int l = inf.readInt(0, 20000, "L");
	inf.readEoln();

	int x=0, y=0;
	for(int i=0; i<n; i++){
		int nx = inf.readInt(-field_len, field_len, "p_i");
		inf.readSpace();
		int ny = inf.readInt(-field_len, field_len, "q_i");

		if( !( (nx==x)^(ny==y) ) ){
			cout << "invalid movement..."<<endl;
			exit(-1);
		}
		inf.readEoln();
		x = nx;
		y = ny;
	}

	set<pair<int, int> > s;
	for(int i=0; i<m; i++){
		int xi = inf.readInt(-field_len, field_len, "x_i");
		inf.readSpace();
		int yi = inf.readInt(-field_len, field_len, "y_i");
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
	int n = inf.readInt(1, max_testcase, "T");
	inf.readEoln();

	for(int i=0; i<n ;i++){
		check_case();
	}
	inf.readEof();
	return 0;
}
