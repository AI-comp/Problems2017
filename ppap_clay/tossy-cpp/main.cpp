#include <bits/stdc++.h>
using namespace std;
#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define mp(a,b) make_pair((a),(b))
#define pb(a) push_back((a))
#define all(x) (x).begin(),(x).end()
#define uniq(x) sort(all(x)),(x).erase(unique(all(x)),end(x))
#define fi first
#define se second
#define dbg(x) cout<<#x" = "<<((x))<<endl
template<class T,class U> ostream& operator<<(ostream& o, const pair<T,U> &p){o<<"("<<p.fi<<","<<p.se<<")";return o;}
template<class T> ostream& operator<<(ostream& o, const vector<T> &v){o<<"[";for(T t:v){o<<t<<",";}o<<"]";return o;}

#define INF 2147483600

bool solve(string &s){
  int n = s.size();

  int i = 0;
  while(i<n && s[i]=='N') i++;
  if(i==n || s[i]!='P') return false;
  i++;

  while(i<n && s[i]=='N') i++;
  if(i==n || s[i]!='P') return false;
  i++;

  if(i==n || s[i]!='A') return false;
  i++;

  while(i<n && s[i]=='N') i++;
  if(i==n || s[i]!='P') return false;
  i++;

  return i==n;
}

int main(){
  int t;
  cin>>t;
  rep(_,t){
    string str;
    cin>>str;
    if(solve(str)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }

  return 0;
}
