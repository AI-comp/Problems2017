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

int main(){
  int t;
  cin>>t;
  rep(_,t){
    int n;
    cin>>n;
    vector<string> vec(n);
    rep(i,n) cin>>vec[i];

    vector<pair<int,int>> vp;
    rep(i,n){
      int cnt=0;
      for(auto c : vec[i]) if(c=='o') cnt++;
      vp.pb(mp(-cnt, i+1));
    }
    sort(all(vp));
    rep(i,n) cout << vp[i].se << " \n"[i==n-1];
  }

  return 0;
}
