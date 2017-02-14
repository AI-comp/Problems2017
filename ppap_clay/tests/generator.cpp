#include <iostream>
#include <cstring>
#include <cstdio>
#include <random>
using namespace std;

//// limit
const int smallminlen=20;
const int smallmaxlen=50;
const int largeminlen=100;
const int largemaxlen=1000;
////

//// cases
const int numofcase=50;
string random_small_name="random_small.in";
string random_large_name="random_large.in";
////

char cs[]={'P','P','A','P'};

int RandomInt(int mini,int maxx){
	return mini+(int)(rand()*(maxx-mini+1.0)/(1.0+RAND_MAX));
}

void generate_case(string name,int minlen,int maxlen){
	FILE *fp;

	if((fp=fopen(name.c_str(),"w"))==NULL){
		printf("File open error!\n");
		return ;
	}
	fprintf(fp, "%d\n", numofcase);
	for(int cases=0;cases<numofcase;cases++){
		char s[1111];
		memset(s,0,sizeof(s));
		int len=RandomInt(minlen,maxlen);
		int yesorno=RandomInt(0,100)/90;
		if(yesorno){
			for(int i=0;i<2;i++){
				int idx;
				for(idx=RandomInt(len/(3-i),len/(2-i)-3);s[idx]!=0;idx=RandomInt(0,len-1));
				s[idx]=cs[i];
				if(i==1)s[idx+1]='A';
			}
			s[len-1]='P';
		}else{
			for(int i=0;i<4;i++){
				int idx;
				for(idx=RandomInt(0,len-1);s[idx]!=0;idx=RandomInt(0,len-1));
				s[idx]=cs[i];
			}
		}
		for(int i=0;i<len;i++)if(s[i]==0)s[i]='N';
		fprintf(fp, "%s\n", s);
	}
	fclose(fp);
}

int main(){
	srand((unsigned int)time(NULL));
	generate_case(random_small_name,smallminlen,smallmaxlen);
	generate_case(random_large_name,largeminlen,largemaxlen);
	return 0;
}
