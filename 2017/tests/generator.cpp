#include <fstream>
#include <random>
#include <set>
#include <climits>

using namespace std;

const int modified_max = 2017;

void generate_set(const string &file_name, int num_case, int max_num){
	ofstream ofs(file_name);
	ofs << num_case <<endl;
	set<int> used;
	for(int i=0; i<num_case; i++){
		int r;
		do {
			int M = max_num;
			if(rand()%2==0) M = modified_max;
			r = rand()%M+1;
		} while(used.count(r)==1);

		ofs << r << endl;
		used.insert(r);
	}
}

int main(){
	srand(time(NULL));
	generate_set("small.in", 20, 3000);
	generate_set("large.in", 500, INT_MAX);
	generate_set("random_test.in", 500, INT_MAX);
	return 0;
}
