#include <fstream>
#include <random>
#include <set>
#include <climits>
#include <algorithm>

using namespace std;

const int modified_max = 2017+100;

void generate_set(const string &file_name, int num_case, int max_num){
  ofstream ofs(file_name);
  ofs << num_case <<endl;

  set<int> nums;
  nums.insert(1);
  nums.insert(2016);
  nums.insert(2017);
  nums.insert(2018);
  nums.insert(max_num);
  while(nums.size() < num_case){
    int M = max_num;
    if(rand()%2==0) M = modified_max;
    nums.insert( rand()%M +1 );
  }

  vector<int> vec;
  for(int i : nums) vec.push_back(i);
  random_shuffle(vec.begin(), vec.end());
  for(int i : vec) ofs << i << endl;
}

int main(){
  srand(time(NULL));
	// generate_set("small_test.in", 20, 3000);
	// generate_set("large_test.in", 1000, INT_MAX);
  generate_set("random_test.in", 1000, INT_MAX);
  return 0;
}
