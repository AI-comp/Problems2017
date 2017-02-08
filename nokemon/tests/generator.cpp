#include <fstream>
#include <string>
#include <random>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void generate_case(ofstream &ofs, int maxN, int maxM, int maxL, int field){
	int n = rand()%maxN + 1;
	int m = rand()%(maxM+1);
	int l = rand()%(maxL+1);

	ofs << n << " " << m << " " << l << endl;

	const char dirs[] = {'N', 'W', 'S', 'E'};
	const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};
	int x = 0, y = 0;
	for(int i=0; i<n; i++){
		int dir = (rand()%2)*2 + i%2;

		int eps = min(field/20,100);
		if(dir==0 && field-y<eps) dir=1;
		else if(dir==1 && field-x<eps) dir=3;
		else if(dir==2 && y+field<eps) dir=0;
		else if(dir==3 && x+field<eps) dir=1;

		int d;
		int nx=x, ny=y;
		do {
			d = rand()%field+1;
			nx = x + dx[dir]*d;
			ny = y + dy[dir]*d;
		} while(nx<-field || field<nx || ny<-field || field<ny);

		ofs << dirs[dir] << " " << d << endl;
		x=nx;
		y=ny;
	}

	set<pair<int, int>> used;
	for(int i=0; i<m; i++){
		int xi,yi;
		do {
			xi = rand()%(field*2) - field;
			yi = rand()%(field*2) - field;
		} while(used.count(make_pair(xi,yi))==1);

		ofs << xi << " " << yi << endl;
		used.insert(make_pair(xi,yi));
	}
}

void generate_set(const string &file_name, int num_case, int maxN, int maxM, int maxL, int filed){
	ofstream ofs(file_name);
	ofs << num_case << endl;
	for(int i=0; i<num_case; i++){
		generate_case(ofs, maxN, maxM, maxL, filed);
	}
}

int main(){
	srand(time(NULL));
	generate_set("small.in", 5, 10, 20, 5, 30);
	generate_set("large.in", 50, 500, 500, 20000, 10000);
	generate_set("random_test1.in", 50, 500, 500, 20000, 10000);
	generate_set("random_test2.in", 50, 500, 500, 20000, 10000);
	return 0;
}
