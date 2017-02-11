#include <iostream>
using namespace std;

//// limit
const int smallminlen=7;
const int smallmaxlen=10;
const int largeminlen=70;
const int largemaxlen=100;
////

//// cases
const int numofcase=50;
string random_small_name="random_small.in";
string random_large_name="random_large.in";
////

int RandomInt(int mini,int maxx){
	return mini+(int)(rand()*(maxx-mini+1.0)/(1.0+RAND_MAX));
}

string cs[]={"o","x","."};

void generate_case(string name,int minlen,int maxlen){
	FILE *fp;

	if((fp=fopen(name.c_str(),"w"))==NULL){
		printf("File open error!\n");
		return ;
	}
	for(int cases=0;cases<numofcase;cases++){
		string s;
		int len=RandomInt(minlen,maxlen);
		string prec="x";
		for(int i=0;i<len;i++){
			int cnum;
			while((cs[cnum=RandomInt(0,2)])==prec&&prec=="x");
			s+=cs[cnum];
			prec=cs[cnum];
		}
		fprintf(fp, "%s\n", s.c_str());
	}
	fclose(fp);
}

int main(){
	srand((unsigned int)time(NULL));
	generate_case(random_small_name,smallminlen,smallmaxlen);
	generate_case(random_large_name,largeminlen,largemaxlen);
	return 0;
}
