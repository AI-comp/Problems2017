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
    int n,m,l;
    cin>>n>>m>>l;
    vector<int> p(n), q(n), x(m), y(m);

    rep(i,n) cin>>p[i]>>q[i];
    rep(i,m) cin>>x[i]>>y[i];

    vector<bool> checked(m, false);
    int ans=0;
    rep(i,n) rep(j,m) if(checked[j]==false){
      int dx = p[i] - x[j];
      int dy = q[i] - y[j];
      if( dx*dx + dy*dy <= l*l ){
        checked[j]=true;
        ans++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
