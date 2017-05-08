#include <iostream>
using namespace std;

//// limit
const int smallminlen=20;
const int smallmaxlen=50;
const int largeminlen=100;
const int largemaxlen=1000;
////

//// cases
const int numofsmallcase=20;
const int numoflargecase=100;
string random_small_name="small.in";
string random_large_name="large.in";
////

int RandomInt(int mini,int maxx){
	return mini+(int)(rand()*(maxx-mini+1.0)/(1.0+RAND_MAX));
}

void generate_case(string name,int minlen,int maxlen,int numofcase){
	FILE *fp;
	string cs[]={"o","."};

	if((fp=fopen(name.c_str(),"w"))==NULL){
		printf("File open error!\n");
		return ;
	}
	fprintf(fp, "%d\n", numofcase);
	for(int cases=0;cases<numofcase-2;cases++){
		string s;
		int len=RandomInt(minlen,maxlen);
		for(int i=0;i<len;i++){
			s+=cs[RandomInt(0,1)];
		}
		fprintf(fp, "%s\n", s.c_str());
	}
	{
		string s;
		int len=maxlen;
		for(int i=0;i<len;i++){
			s+='.';
		}
		fprintf(fp, "%s\n", s.c_str());
	}
	{
		string s;
		int len=maxlen;
		for(int i=0;i<len;i++){
			s+='o';
		}
		fprintf(fp, "%s\n", s.c_str());
	}
	fclose(fp);
}

int main(){
	srand((unsigned int)time(NULL));
	generate_case(random_small_name,smallminlen,smallmaxlen,numofsmallcase);
	generate_case(random_large_name,largeminlen,largemaxlen,numoflargecase);
	return 0;
}
