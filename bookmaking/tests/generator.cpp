#include <fstream>
#include <random>
#include <set>
#include <cassert>
#include <algorithm>

using namespace std;

void generate_small(const string &file_name, int num_case, int max_num){
	ofstream ofs(file_name);
	ofs << num_case <<endl;
	set<int> used;
	for(int i=0; i<num_case; i++){
		int r;
		do {
			r = rand()%max_num+1;
		} while(used.count(r)==1);

		ofs << r << endl;
		used.insert(r);
	}
}

// num_case と max_num が等しいので，random_permutationで生成
void generate_large(const string &file_name, int num_case, int max_num){
  assert(num_case == max_num);
  ofstream ofs(file_name);
	ofs << num_case <<endl;

  vector<int> vec(num_case);
  for(int i=0; i<num_case; i++) vec[i] = i+1;
  random_shuffle(vec.begin(), vec.end());

  for(int i=0; i<num_case; i++) ofs << vec[i] << endl;
}

int main(){
	srand(time(NULL));
	generate_small("small_test.in", 20, 1000);
//	generate_large("large_test.in", 1000, 1000);
	return 0;
}
