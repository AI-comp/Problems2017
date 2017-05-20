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

int dp[105][55][55];

int main(){
  int t;
  cin>>t;
  rep(_,t){
    int n,x;
    cin>>n>>x;
    vector<int> a(n),b(n),c(n),r(n);
    rep(i,n) cin>>a[i]>>b[i]>>c[i]>>r[i];

    fill(dp[0][0], dp[105][0], INF);
    dp[0][0][0] = 0;

    rep(i,2*x+1) rep(j,x+1) rep(k,x+1) if(dp[i][j][k]<INF){
      rep(l,n){
        int ni = min(i+a[l], 2*x);
        int nj = min(j+b[l], x);
        int nk = min(k+c[l], x);
        dp[ni][nj][nk] = min(dp[ni][nj][nk], dp[i][j][k] + r[l]);
      }
    }

    if(dp[2*x][x][x]==INF) cout << -1 << endl;
    else cout << dp[2*x][x][x] << endl;
  }

  return 0;
}
