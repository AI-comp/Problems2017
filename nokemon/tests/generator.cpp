#include <fstream>
#include <string>
#include <random>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void generate_case(ofstream &ofs, int maxN, int maxM, int maxL, int field, int minN=2, int minM=0, int minL=0){
	int n = rand()%(maxN+1-minN) + minN;
	int m = rand()%(maxM+1-minM) + minM;
	int l = rand()%(maxL+1-minL) + minL;

	ofs << n << " " << m << " " << l << endl;

	int x = 0, y = 0;
  bool lastdir = true;
	for(int i=0; i<n; i++){
    bool dir;
    if(rand()%10==1){
      dir = lastdir;
    } else {
      dir = !dir;
    }
		int nx = x, ny = y;
		if(dir) {
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

void naive_killer_case(ofstream &ofs, int N, int M, int L, int field){
  ofs << N << " " << M << " " << L << endl;

  int m[4][2] = {{1,1}, {-1,1}, {-1,-1}, {1,-1}};

  pair<int,int> p = make_pair(0,field - rand()%100);
  for(int i=0; i<N; i++){
    ofs << m[i%4][0] * p.first << " " << m[i%4][1] * p.second << endl;
    if(i%2==0) p.first = field - rand()%100;
    else p.second = field - rand()%100;
  }

	set<pair<int, int>> used;
	for(int i=0; i<M; i++){
		int xi,yi;
		do {
			xi = rand()%(field*2) - field;
			yi = rand()%(field*2) - field;
		} while(used.count(make_pair(xi,yi))==1);

		ofs << xi << " " << yi << endl;
		used.insert(make_pair(xi,yi));
	}
}

void generate_set(const string &file_name, int num_case, int maxN, int maxM, int maxL, int field){
	ofstream ofs(file_name);
	ofs << num_case << endl;
  for(int i=0; i<num_case; i++){
		generate_case(ofs, maxN, maxM, maxL, field);
	}
}

void generate_large(const string &file_name, int num_case, int maxN, int maxM, int maxL, int field){
  ofstream ofs(file_name);
	ofs << num_case << endl;
  for(int i=0; i<num_case-10; i++){
    generate_case(ofs, maxN, maxM, maxL, field);
	}
  generate_case(ofs, 1, maxM, maxL/2, field, 1, maxM, maxL/2);
  generate_case(ofs, maxN, 0, 0, field, maxN, 0, 0);
  generate_case(ofs, maxN, 0, maxL/2, field, maxN, 0, maxL/2);
  generate_case(ofs, maxN, maxM, 0, field, maxN, maxM, 0);
  generate_case(ofs, maxN, maxM, maxL, field, maxN, maxM, maxL);
  generate_case(ofs, maxN, maxM, maxL, field, maxN, maxM, maxL);
  naive_killer_case(ofs, maxN, maxM, 1, field);
  naive_killer_case(ofs, maxN, maxM, 100, field);
  naive_killer_case(ofs, maxN, maxM, maxL, field);
  naive_killer_case(ofs, maxN, maxM, maxL, field);
}

int main(){
	srand(time(NULL));
	generate_set("small_test.in", 5, 5, 20, 10, 50);
	generate_large("large_test.in", 50, 500, 500, 20000, 10000);
	generate_set("random_test1.in", 50, 500, 500, 20000, 10000);
	generate_set("random_test2.in", 50, 500, 500, 20000, 10000);
	return 0;
}
