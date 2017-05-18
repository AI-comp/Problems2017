#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;
  for(int i = 0; i < t; i++){
    string str;
    int k;
    cin >> str >> k;

    char ans = '*';
    if(k <= str.length()) ans = str[k-1];
    cout << ans << endl;
  }
}
