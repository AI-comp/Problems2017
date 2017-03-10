#include <fstream>
#include <string>
#include <random>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void generate_case(ofstream &ofs, int maxN, int maxM, int maxL, int field){
	int n = rand()%(maxN-1) + 2;
	int m = rand()%(maxM+1);
	int l = rand()%(maxL+1);

	ofs << n << " " << m << " " << l << endl;

	int x = 0, y = 0;
	for(int i=0; i<n; i++){
		int dir = rand()%2;
		int nx = x, ny = y;
		if(dir==1) {
			do {
				nx = rand()%(field*2) - field;
			} while(nx == x);
		} else {
			do {
				ny = rand()%(field*2) - field;
			} while(ny == y);
		}

		ofs << nx << " " << ny << endl;
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
	generate_set("small.in", 5, 5, 20, 10, 50);
	generate_set("large.in", 50, 500, 500, 20000, 10000);
	generate_set("random_test1.in", 50, 500, 500, 20000, 10000);
	generate_set("random_test2.in", 50, 500, 500, 20000, 10000);
	return 0;
}
