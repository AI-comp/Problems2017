#include "testlib.h"
#include <climits>

const int max_testcase = 1000;

void check_case(){
	int n = inf.readInt(1, INT_MAX, "n");
	inf.readEoln();
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
