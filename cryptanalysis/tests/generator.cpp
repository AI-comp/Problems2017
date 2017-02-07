#include <iostream>
#include <fstream>
#include <string>
#include <random>

using namespace std;

int main(){
	ofstream ofs("large.in"); 
	int left_length = 10000;
	srand(time(NULL));
	while(left_length>0){
		int next_length = 10 + rand()%500;
		if(next_length > left_length) next_length = left_length;
		for(int i=0; i<next_length; i++) ofs << (char)('a' + rand()%26);
		ofs<<endl;
		left_length -= next_length;
	}
	return 0;
}

