#include <stdio.h>

#define mod 2017

typedef long long ll;

int main(int argc, char const *argv[])
{
	int cases;
	scanf("%d",&cases);
	while(cases--){
		ll n;
		scanf("%lld",&n);
		if(n>2017){
			printf("0\n");
		}else{
			ll res=1;
			for(ll i=0;i<n;i++){
				res=(i+1)*res%mod;
			}
			printf("%lld\n", res);
		}
	}
	return 0;
}
