#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
using ll = long long;
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define fi first
#define se second

using pi = pair<int,int>;

int main()
{
    int T;
    cin >>T;

    int M=0;
    vector<pi> p(T);
    rep(i,T)
    {
        int n;
        cin >>n;
        p[i] = pi(n,i);
        M = max(M,n);
    }
    sort(all(p));

    vector<ll> ans(T);
    ll fact=1;
    int idx=0;
    for(ll i=1; i<=M; ++i)
    {
        fact *= i;
        fact %= 2017;

        while(idx < T && p[idx].fi == i)
        {
            ans[p[idx].se] = fact;
            ++idx;
        }
    }

    rep(i,T) cout << ans[i] << endl;
    return 0;
}
